#include <print>
#include <version>

int main() {
    std::println("hello, from {}", __cplusplus);
#ifdef __cpp_lib_print
    std::println("std::print() is available!");
#endif
}