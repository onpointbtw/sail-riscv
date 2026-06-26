#!/bin/sh

cmake -S . -B build-lean -DCMAKE_BUILD_TYPE=RelWithDebInfo
# cmake --build build-lean --target generated_lean_rv64d generated_lean_executable_rv64d -j8
cmake --build build-lean --target generated_lean_rv64d -j4
