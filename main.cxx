#include <print>
#include <argparse/argparse.hpp>

import sai.core;

int main(int argc, char **argv)
{
    argparse::ArgumentParser cli("sai-gguf-reader", "0.0.1");
    cli.add_argument("model")
     .help("Path to a .gguf model file");
    cli.parse_args(argc, argv);

    auto sai_core_version = sai::core::version();
    std::println("the version of sai core: {}", sai_core_version);
    std::println("hello");

    return 0;
}

