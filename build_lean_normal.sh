#!/bin/sh

cmake -S . -B build-lean -DCMAKE_BUILD_TYPE=RelWithDebInfo
cmake --build build-lean --target generated_lean_rv64d
