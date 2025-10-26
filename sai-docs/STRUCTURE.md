sifirai/
├─ libs/
│  ├─ sai-core/
│  ├─ sai-tensor/
│  ├─ sai-gguf/
│  ├─ sai-kernel/
│  ├─ sai-ml/
│  └─ sai-dl/
└─ tools/
   ├─ sai-cli/
   ├─ sai-gguf-inspect/
   └─ sai-benchmark/


sifiarai/
├─ CMakeLists.txt
├─ deps/                                # dependencies, external headers, source etc
├─ docs/                                # documentation etc
├─ bindindgs/                           # python, rust, go etc
├─ cmake/
│  ├─ aarch64-toolchain.cmake
│  └─ compiler-flags.cmake
├─ sai-libs/                          # Core engine libraries
│  ├─ sai-core/                           # Foundational utilities: logging, config, span IO
│  │  ├─ CMakeLists.txt
│  │  └─ src/
│  │     └─ core.ixx
│  ├─ sai-tensor/                         # Tensor operations, shape, strides, basic math
│  │  ├─ CMakeLists.txt
│  │  └─ src/
│  │     └─ tensor.ixx
│  ├─ sai-gguf/                           # GGUF parser + writer
│  │  ├─ CMakeLists.txt
│  │  └─ src/
│  │     ├─ gguf.cursor.ixx
│  │     ├─ gguf.reader.ixx
│  │     ├─ gguf.writer.ixx
│  │     └─ gguf.meta.ixx
│  ├─ sai-kernel/                         # Hardware-specific compute kernels
│  │  ├─ cpu/
│  │  │  ├─ CMakeLists.txt
│  │  │  └─ src/cpu.kernel.ixx
│  │  ├─ simd/
│  │  │  └─ src/simd.kernel.ixx
│  │  └─ cuda/
│  │     └─ src/cuda.kernel.ixx
│  ├─ sai-ml/
│  │  ├─ src/ml.ixx                   # classical ML utils (e.g., kmeans, regression)
│  └─ sai-dl/
│     ├─ src/dl.ixx                   # deep learning building blocks
│     └─ src/attention.ixx
│
├─ sai-tools/                             # Command-line tools / utilities
│  ├─ utilities/
│  │  ├─ CMakeLists.txt
│  │  └─ src/
│  │     ├─ utility.ixx
│  │     └─ main.cpp
│  ├─ gguf-reader/
│  │  ├─ CMakeLists.txt
│  │  └─ src/
│  │     ├─ gguf.reader.ixx
│  │     └─ main.cpp
│  ├─ convert/
│  ├─ quantize/
│  └─ benchmark/
│
├─ tests/
│  ├─ CMakeLists.txt
│  └─ core/
│     └─ test_core.cpp
│
└─ .gitignore

