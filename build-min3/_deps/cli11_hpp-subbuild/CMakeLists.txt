# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.28.3)

# Reject any attempt to use a toolchain file. We must not use one because
# we could be downloading it here. If the CMAKE_TOOLCHAIN_FILE environment
# variable is set, the cache variable will have been initialized from it.
unset(CMAKE_TOOLCHAIN_FILE CACHE)
unset(ENV{CMAKE_TOOLCHAIN_FILE})

# We name the project and the target for the ExternalProject_Add() call
# to something that will highlight to the user what we are working on if
# something goes wrong and an error message is produced.

project(cli11_hpp-populate NONE)



include(ExternalProject)
ExternalProject_Add(cli11_hpp-populate
                     "UPDATE_DISCONNECTED" "False" "EXTERNALPROJECT_INTERNAL_ARGUMENT_SEPARATOR" "URL" "https://github.com/CLIUtils/CLI11/releases/download/v2.6.2/CLI11.hpp" "URL_HASH" "SHA256=227a16fe5f9f8ada80c3c409492475536f597e7bd83a6c26eacc3c8c149a9295" DOWNLOAD_NO_EXTRACT YES
                    SOURCE_DIR          "/home/vogtb/theorem_stuff/sail-riscv/build-min3/_deps/cli11_hpp-src"
                    BINARY_DIR          "/home/vogtb/theorem_stuff/sail-riscv/build-min3/_deps/cli11_hpp-build"
                    CONFIGURE_COMMAND   ""
                    BUILD_COMMAND       ""
                    INSTALL_COMMAND     ""
                    TEST_COMMAND        ""
                    USES_TERMINAL_DOWNLOAD  YES
                    USES_TERMINAL_UPDATE    YES
                    USES_TERMINAL_PATCH     YES
)


ExternalProject_Get_Property(cli11_hpp-populate DOWNLOADED_FILE)
get_filename_component(dlFileName "${DOWNLOADED_FILE}" NAME)

ExternalProject_Add_Step(cli11_hpp-populate copyfile
  COMMAND    "/usr/bin/cmake" -E copy_if_different
             "<DOWNLOADED_FILE>" "/home/vogtb/theorem_stuff/sail-riscv/build-min3/_deps/cli11_hpp-src"
  DEPENDEES  patch
  DEPENDERS  configure
  BYPRODUCTS "/home/vogtb/theorem_stuff/sail-riscv/build-min3/_deps/cli11_hpp-src/${dlFileName}"
  COMMENT    "Copying file to SOURCE_DIR"
)

