# pi_multiwii_ws
This is ROS workspace running on docker ros:ros-noetic-core image for raspberry pi zero 2W communicate with Flight controller using Multiwii Serial Protocal
How to use: This package has been catkin_make_isolated already, to use it, follow these steps
1. nano setup.bash in devel_isolated folder.
2. config the correct folder on the machine. 

How to build: For rebuild on raspberry pi zero 2W
1. clone this package to raspberry pi zero 2W ros container
2. source ros_entrypoint.sh
3. sudo apt install -y --no-install-recommends ninja-build libasio-dev
4. cd pi_multiwii_ws
5. catkin_make_isolated
