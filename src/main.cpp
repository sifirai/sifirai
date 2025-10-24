import tensor;
#include <print>
#include <version>

int main() {
    std::println("hello, from {}", __cplusplus);

    // testing modules c++23
    int result = tensor::add_tensors(10, 20);
    std::println("Tensor add result = {}", result);

#ifdef __cpp_lib_print
    std::println("std::print() is available!");
#endif
}