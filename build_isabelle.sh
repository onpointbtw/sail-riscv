#!/bin/sh

cmake -S . -B build-isabelle -DCMAKE_BUILD_TYPE=RelWithDebInfo
# cmake --build build-isabelle --target help | grep -i -E 'isa|isabelle|thy'
cmake --build build-isabelle --target generated_isabelle_rv64d