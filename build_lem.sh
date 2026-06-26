#!/bin/sh

cmake -S . -B build -DCMAKE_BUILD_TYPE=RelWithDebInfo
cmake --build build --target generated_lem_rv64d 
