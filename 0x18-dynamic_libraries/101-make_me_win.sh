#!/bin/bash
wget -P /tmp https://github.com/mesihg/alx-low_level_programming/raw/master/0x18-dynamic_libraries/lotto_win.so
export LD_PRELOAD=/tmp/lotto_win.so
