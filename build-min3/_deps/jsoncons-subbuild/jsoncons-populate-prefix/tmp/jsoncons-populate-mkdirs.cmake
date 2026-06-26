# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/vogtb/theorem_stuff/sail-riscv/build-min3/_deps/jsoncons-src"
  "/home/vogtb/theorem_stuff/sail-riscv/build-min3/_deps/jsoncons-build"
  "/home/vogtb/theorem_stuff/sail-riscv/build-min3/_deps/jsoncons-subbuild/jsoncons-populate-prefix"
  "/home/vogtb/theorem_stuff/sail-riscv/build-min3/_deps/jsoncons-subbuild/jsoncons-populate-prefix/tmp"
  "/home/vogtb/theorem_stuff/sail-riscv/build-min3/_deps/jsoncons-subbuild/jsoncons-populate-prefix/src/jsoncons-populate-stamp"
  "/home/vogtb/theorem_stuff/sail-riscv/build-min3/_deps/jsoncons-subbuild/jsoncons-populate-prefix/src"
  "/home/vogtb/theorem_stuff/sail-riscv/build-min3/_deps/jsoncons-subbuild/jsoncons-populate-prefix/src/jsoncons-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/vogtb/theorem_stuff/sail-riscv/build-min3/_deps/jsoncons-subbuild/jsoncons-populate-prefix/src/jsoncons-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/vogtb/theorem_stuff/sail-riscv/build-min3/_deps/jsoncons-subbuild/jsoncons-populate-prefix/src/jsoncons-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
