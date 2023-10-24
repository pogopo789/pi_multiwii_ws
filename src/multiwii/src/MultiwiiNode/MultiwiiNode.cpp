#include <MultiwiiNode/MultiwiiNode.h>

double deg2rad(const double deg) {
    return deg/180.0 * M_PI;
}

double rad2deg(const double rad) {
    return rad/M_PI * 180.0;
}

void MultiwiiNode::setup() {
    std::string device;
    int baudrate = 115200;
    if(node->nh.getParam("device", device)) {
        if(!node->nh.getParam("baudrate", baudrate)) {
            ROS_ERROR("Parameter 'baudrate' not set. Using default baudrate of %i", baudrate);
        }
        else {
            if(baudrate<=0) {
                ROS_ERROR("'baudrate' must be positive!");
                baudrate = 115200;
            }
        }
        ROS_INFO("Connected to FCU at %s", device.c_str());
    }
    else {
        ROS_ERROR("Parameter 'device' not set.");
    }
    fcu->connect(device, uint(baudrate));

    rc_sub = node->nh.subscribe("/PC_input_topic", 10, &MultiwiiNode::rc_override_raw, this); // raw channel order
}

void MultiwiiNode::loop()
{

}

void MultiwiiNode::onAttitude(const msp::msg::Attitude &attitude){
    tf->transformStamped.header.stamp = ros::Time::now();

    tf->q.setRPY(deg2rad(attitude.roll), deg2rad(attitude.pitch), deg2rad(attitude.yaw));
    tf->transformStamped.transform.rotation.x = tf->q.x();
    tf->transformStamped.transform.rotation.y = tf->q.y();
    tf->transformStamped.transform.rotation.z = tf->q.z();
    tf->transformStamped.transform.rotation.w = tf->q.w();

    tf->BoardcasterObject.sendTransform(tf->transformStamped);
}

void MultiwiiNode::onDebug(const msp::msg::INAVDebug &debug){
    tf->transformStamped.header.stamp = ros::Time::now();

    tf->transformStamped.transform.translation.x = (double)(debug.debug1/1000);
    tf->transformStamped.transform.translation.y = (double)(debug.debug0/1000);
    if (debug.debug2<0)
        tf->transformStamped.transform.translation.z = (double)(0);
    else
        tf->transformStamped.transform.translation.z = (double)(debug.debug2/1000);

    tf->BoardcasterObject.sendTransform(tf->transformStamped);
}

void MultiwiiNode::rc_override_raw(const mavros_msgs::OverrideRCIn &rc) {
    std::vector<uint16_t> channels;
    for(const uint16_t c : rc.channels) { channels.push_back(c); }
    fcu->setRc(channels);
}

void MultiwiiNode::getAllData(){
    fcu->subscribe(&MultiwiiNode::onAttitude, this);
    fcu->subscribe(&MultiwiiNode::onDebug, this);

    setDynamicConfigureCallback();
};

void MultiwiiNode::setDynamicConfigureCallback() {
    // dynamic configure
    dyn_conf_srv.setCallback(boost::bind(&MultiwiiNode::dynconf_callback, this, _1, _2));
}

void MultiwiiNode::dynconf_callback(multiwii::UpdateRatesConfig &config, uint32_t /*level*/) {
    // define map with matching update rate per message ID
    const std::map<msp::ID, double> msp_rates = {
        {msp::ID::MSP2_INAV_DEBUG, config.MSP2_INAV_DEBUG},
        {msp::ID::MSP_ATTITUDE, config.MSP_ATTITUDE},
    };

    // apply update
    for(const auto& r : msp_rates) {
        if(fcu->hasSubscription(r.first)) {
            fcu->getSubscription(r.first)->setTimerFrequency(r.second);
        }
    }
}

int main(int argc, char **argv) {
    ros::init(argc, argv, "Multiwii");

    MultiwiiNode node(1);
    node.getAllData();
    
    ROS_INFO("MSP ready");
    std::cout<<"MSP ready"<<std::endl;

    ros::AsyncSpinner spinner(2);
    spinner.start();
    ros::waitForShutdown();

    return 0;
}