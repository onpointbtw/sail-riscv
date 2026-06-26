# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/vogtb/theorem_stuff/sail-riscv/build-min3/_deps/cli11_hpp-src"
  "/home/vogtb/theorem_stuff/sail-riscv/build-min3/_deps/cli11_hpp-build"
  "/home/vogtb/theorem_stuff/sail-riscv/build-min3/_deps/cli11_hpp-subbuild/cli11_hpp-populate-prefix"
  "/home/vogtb/theorem_stuff/sail-riscv/build-min3/_deps/cli11_hpp-subbuild/cli11_hpp-populate-prefix/tmp"
  "/home/vogtb/theorem_stuff/sail-riscv/build-min3/_deps/cli11_hpp-subbuild/cli11_hpp-populate-prefix/src/cli11_hpp-populate-stamp"
  "/home/vogtb/theorem_stuff/sail-riscv/build-min3/_deps/cli11_hpp-subbuild/cli11_hpp-populate-prefix/src"
  "/home/vogtb/theorem_stuff/sail-riscv/build-min3/_deps/cli11_hpp-subbuild/cli11_hpp-populate-prefix/src/cli11_hpp-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/vogtb/theorem_stuff/sail-riscv/build-min3/_deps/cli11_hpp-subbuild/cli11_hpp-populate-prefix/src/cli11_hpp-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/vogtb/theorem_stuff/sail-riscv/build-min3/_deps/cli11_hpp-subbuild/cli11_hpp-populate-prefix/src/cli11_hpp-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
