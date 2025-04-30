#!/bin/bash

DEBUG_MODE=$1
ARG=""
rm -rf build/* build/.*
if [ "$1" = "d" ]; then
    echo "Make DEBUG version"
    cmake -Bbuild -DCMAKE_BUILD_TYPE=Debug
    cmake --build build
elif [ "$1" = "r" ]; then
    echo "Make RELEASE version"
    cmake -B build/
else
    echo "Unknown command: $1"
    echo "Usage: $0 {d|r}"
    exit 1
fi

cd build/
make