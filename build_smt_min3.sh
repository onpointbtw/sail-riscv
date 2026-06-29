#!/bin/sh

cmake -S . -B build-min3 -DCMAKE_BUILD_TYPE=RelWithDebInfo
# cmake --build build-min3 --target help | grep -i -E 'isa|isabelle|thy'
# cmake --build build-min3 --target generated_smt_rv64d
cd build-min3
ctest -R smt_properties_rv64d --output-on-failure