#pragma once
#include <iostream>
#include <ros/ros.h>

class Node
{
private:
    ros::Timer non_realtime_loop;
    double loop_hz;
    ros::Duration loop_s;
    ros::Duration elapsed_time_;
    void (*update)();
public:
    ros::NodeHandle nh;
    Node(const double &input_hz, void (*funcPtr)());
    void loop(const ros::TimerEvent& e);
};

Node::Node(const double &input_hz, void (*funcPtr)()){
    nh = ros::NodeHandle("~");
    loop_hz = input_hz;
    loop_s = ros::Duration(1/loop_hz);
    update=funcPtr;
    non_realtime_loop = nh.createTimer(loop_s, &Node::loop, this);
}

void Node::loop(const ros::TimerEvent& e){
    elapsed_time_ = ros::Duration(e.current_real - e.last_real);
    update();
}