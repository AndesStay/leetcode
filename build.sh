#!/bin/sh
if [ -d "./build" ]; then
    echo "directory build already exists."
    cd build
    rm -rf *
else
    echo "directory build does not exists, create it."
    mkdir build
    cd build
fi


cmake -DCMAKE_C_COMPILER=/usr/local/bin/gcc-10 -DCMAKE_CXX_COMPILER=/usr/local/bin/g++-10 -DCMAKE_BUILD_TYPE=Debug ..
make