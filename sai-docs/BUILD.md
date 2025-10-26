# Build Instructions — sifirai

This document describes how to build **sifirai** using modern CMake and a custom GCC 15.2 toolchain.


## Prerequisites

- **CMake ≥ 3.25**
- **GCC 15.2+** installed under `/usr/local/gcc-15.2/`
- **Linux** or compatible environment (WSL2 / Ubuntu preferred)

Verify your compiler:
```bash
/usr/local/gcc-15.2/bin/g++ --version
g++ (GCC) 15.2.0
```


### Option 1 — Using the custom GCC 15.2 toolchain (recommended)
```
cmake -S . -B build -DCMAKE_TOOLCHAIN_FILE=toolchains/gcc152.cmake
cmake --build build -j$(nproc)
```

### Option 2 — Using the system compiler
```
cmake -S . -B build
cmake --build build -j$(nproc)
```

### Cleanup
```
rm -rf build && mkdir build
```

## Notes
- The toolchain file (toolchains/gcc152.cmake) ensures a consistent compiler setup across all projects.
- Use -DCMAKE_BUILD_TYPE=Debug for development builds with warnings and debug symbols.
- Use -DCMAKE_BUILD_TYPE=Release for optimized binaries (-O3 -march=native).

### Example
```
cmake -S . -B build -DCMAKE_TOOLCHAIN_FILE=toolchains/gcc152.cmake -DCMAKE_BUILD_TYPE=Release
cmake --build build -j$(nproc)
```