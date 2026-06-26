#!/bin/sh

cmake -S . -B build-min3 -DCMAKE_BUILD_TYPE=RelWithDebInfo
cmake --build build-min3 --target generated_lean_rv64d
