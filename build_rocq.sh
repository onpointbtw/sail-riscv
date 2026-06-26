#!/bin/sh

cmake -S . -B build -DCMAKE_BUILD_TYPE=RelWithDebInfo
# cmake --build build --target help | grep -i -E 'isa|isabelle|thy'
cmake --build build --target generated_rocq_rv64d
