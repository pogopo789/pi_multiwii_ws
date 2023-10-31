#!/usr/bin/env sh
# generated from catkin.builder Python module

# remember type of shell if not already set
if [ -z "$CATKIN_SHELL" ]; then
  CATKIN_SHELL=sh
fi
# detect if running on Darwin platform
_UNAME=`uname -s`
IS_DARWIN=0
if [ "$_UNAME" = "Darwin" ]; then
  IS_DARWIN=1
fi

# Prepend to the environment
export CMAKE_PREFIX_PATH="/pi_multiwii_ws/devel_isolated/msp:$CMAKE_PREFIX_PATH"
if [ $IS_DARWIN -eq 0 ]; then
  export LD_LIBRARY_PATH="/pi_multiwii_ws/devel_isolated/msp/lib:/pi_multiwii_ws/devel_isolated/msp/lib/x86_64-linux-gnu:$LD_LIBRARY_PATH"
else
  export DYLD_LIBRARY_PATH="/pi_multiwii_ws/devel_isolated/msp/lib:/pi_multiwii_ws/devel_isolated/msp/lib/x86_64-linux-gnu:$DYLD_LIBRARY_PATH"
fi
export PATH="/pi_multiwii_ws/devel_isolated/msp/bin:$PATH"
export PKG_CONFIG_PATH="/pi_multiwii_ws/devel_isolated/msp/lib/pkgconfig:/pi_multiwii_ws/devel_isolated/msp/lib/x86_64-linux-gnu/pkgconfig:$PKG_CONFIG_PATH"
export PYTHONPATH="/pi_multiwii_ws/devel_isolated/msp/lib/python3/dist-packages:$PYTHONPATH"
