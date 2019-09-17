#!/bin/bash
wget -P /tmp https://github.com/jsgalvish/holbertonschool-low_level_programming/raw/master/0x18-dynamic_libraries/newlib.so
export LD_PRELOAD=/tmp/newlib.so
