#!/usr/bin/env sh
# generated from catkin.builder Python module

# remember type of shell if not already set
if [ -z "$CATKIN_SHELL" ]; then
  CATKIN_SHELL=sh
fi
. "/home/john/Octomap/devel_isolated/dynamic_edt_3d/setup.$CATKIN_SHELL"

# detect if running on Darwin platform
_UNAME=`uname -s`
IS_DARWIN=0
if [ "$_UNAME" = "Darwin" ]; then
  IS_DARWIN=1
fi

# Prepend to the environment
export CMAKE_PREFIX_PATH="/home/john/Octomap/devel_isolated/octovis:$CMAKE_PREFIX_PATH"
if [ $IS_DARWIN -eq 0 ]; then
  export LD_LIBRARY_PATH="/home/john/Octomap/devel_isolated/octovis/lib:/home/john/Octomap/devel_isolated/octovis/lib/x86_64-linux-gnu:$LD_LIBRARY_PATH"
else
  export DYLD_LIBRARY_PATH="/home/john/Octomap/devel_isolated/octovis/lib:/home/john/Octomap/devel_isolated/octovis/lib/x86_64-linux-gnu:$DYLD_LIBRARY_PATH"
fi
export PATH="/home/john/Octomap/devel_isolated/octovis/bin:$PATH"
export PKG_CONFIG_PATH="/home/john/Octomap/devel_isolated/octovis/lib/pkgconfig:/home/john/Octomap/devel_isolated/octovis/lib/x86_64-linux-gnu/pkgconfig:$PKG_CONFIG_PATH"
export PYTHONPATH="/home/john/Octomap/devel_isolated/octovis/lib/python3/dist-packages:$PYTHONPATH"
