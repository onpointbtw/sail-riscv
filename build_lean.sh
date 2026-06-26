#!/bin/sh

cmake -S . -B build-ninja -DCMAKE_BUILD_TYPE=RelWithDebInfo -G Ninja
# cmake --build build-ninja --target generated_lean_rv64d generated_lean_executable_rv64d -j1
cmake --build build-ninja --target generated_lean_rv64d  -j4
