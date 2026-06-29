#include "sail_riscv_version.h"

namespace version_info {

std::string_view release_version() {
  return "0.12";
}

std::string_view git_version() {
  return "2026-06-22-b5a2182-14-ga1dec03f-dirty";
}

std::string_view sail_version() {
  return "Sail 0.20.2 (sail @ opam-v2.1.5 0.20.2)";
}

std::string_view cxx_compiler_version() {
  return "GNU 13.3.0";
}

}
