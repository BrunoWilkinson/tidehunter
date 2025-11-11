#!/bin/bash
cd "${0%/*}"/

cmake -B "../build/`uname`/Debug" -DCMAKE_BUILD_TYPE=Debug -S ..
cmake -B "../build/`uname`/RelWithDebInfo" -DCMAKE_BUILD_TYPE=RelWithDebInfo -S ..
cmake -B "../build/`uname`/Release" -DCMAKE_BUILD_TYPE=Release -S ..
