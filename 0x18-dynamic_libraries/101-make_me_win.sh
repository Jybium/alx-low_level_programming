#!/bin/bash
wget -P /tmp https://github.com/jybium/alx-low_level_programming/raw/main/0x18-dynamic_libraries/libmask.so
export LD_PRELOAD=/tmp/libmask.so
