#pragma once

#include <MultiwiiNode/Node.h>
#include <MultiwiiNode/TF_Broadcaster.h>

#include <dynamic_reconfigure/server.h>
#include <multiwii/UpdateRatesConfig.h>

#include <std_msgs/UInt16.h>
#include <std_msgs/UInt32.h>
#include <std_msgs/UInt8MultiArray.h>
#include <std_msgs/Bool.h>
#include <std_msgs/Float64.h>

#include <mavros_msgs/RCIn.h>
#include <mavros_msgs/RCOut.h>
#include <mavros_msgs/OverrideRCIn.h>
#include <mavros_msgs/ActuatorControl.h>
#include <mavros_msgs/CommandBool.h>

#include <msp/FlightController.hpp>
#include <msp/msp_msg.hpp>

class MultiwiiNode
{
private:
    /* data */
    Node *node;
    TF_Boardcaster *tf;
    fcu::FlightController *fcu;
    
    dynamic_reconfigure::Server<multiwii::UpdateRatesConfig> dyn_conf_srv;

    ros::Subscriber rc_sub;

public:
    MultiwiiNode(double input_loop_hz);
    ~MultiwiiNode();
    
    void setup();
    static void loop();
    
    void getAllData();
    void onAttitude(const msp::msg::Attitude &attitude);
    void onDebug(const msp::msg::INAVDebug &debug);
    void rc_override_raw(const mavros_msgs::OverrideRCIn &rc);

    void dynconf_callback(multiwii::UpdateRatesConfig &config, uint32_t /*level*/);
    void setDynamicConfigureCallback();
};

MultiwiiNode::MultiwiiNode(double input_loop_hz)
{
    node = new Node(input_loop_hz, MultiwiiNode::loop);
    tf = new TF_Boardcaster("odom","base_link");
    fcu = new fcu::FlightController();
    setup();
}

MultiwiiNode::~MultiwiiNode()
{
    delete node;
    delete tf;
    delete fcu;
}
