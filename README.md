# pi_multiwii_ws
This is ROS workspace running on docker ros:ros-noetic-core image for raspberry pi zero 2W communicate with Flight controller using Multiwii Serial Protocal
How to use: This package has been catkin_make_isolated already, but to use it, you need to follow these steps
1. download the package to PC that has VScode
2. replace all files that contain the old folder /home/thanhdat/pi_multiwii_ws with the correct folder pi_multiwii_ws on the machine that you going to run. 
3. download the changed pi_multiwii_ws that you have changed to the machine you want to run
4. sudo apt install -y --no-install-recommends ninja-build libasio-dev
5. sudo apt install ros-noetic-mavros* -y
6. source setup.bash

How to build: For rebuild on raspberry pi zero 2W
1. clone this package to raspberry pi zero 2W ros container
2. source ros_entrypoint.sh
3. sudo apt install -y --no-install-recommends ninja-build libasio-dev
4. cd pi_multiwii_ws
5. catkin_make_isolated
