#!/usr/bin/env sh
# generated from catkin.builder Python module

if [ ! -z "$_CATKIN_SETUP_DIR" ] && [ "$_CATKIN_SETUP_DIR" != "/pi_multiwii_ws/devel_isolated" ]; then
  echo "Relocation of this workspace is not supported"
  return 1
fi

_CATKIN_SETUP_DIR= . "/pi_multiwii_ws/devel_isolated/multiwii/setup.sh"