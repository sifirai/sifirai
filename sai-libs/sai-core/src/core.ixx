module;
#include <print>

export module sai.core;

//export void say_hello_from_sai_core() {
//    std::println("Hello from sai core");
//}

export namespace sai::core {
  constexpr const char* version() noexcept { return "sai-core 0.0.1"; }
}
