# sifirai — A Modern GenAI Engine

**CPU-first. GPU-optional. No legacy baggage.**  
Built for clarity, performance, and control.


### What is `sifirai`?

`sifirai` is a next-generation **generative AI engine** with built-in LLM support —  
crafted in modern **C++23**, designed for **seamless Python integration**, and optimized for **bare-metal performance**.

The name comes from **“sıfır” (zero in Turkish)** —  
a nod to *zero compromise* and *zero unnecessary abstraction*.

At its core, `sifirai` is an **agentic execution engine**:  
Every ML model is a **node** in a dynamic computation graph.  
Nodes can *think, act, and communicate* — enabling modular, composable AI systems that move beyond monolithic inference.


### Why `sifirai`?

- **Modern C++ only** — built with GCC 15.2 and C++23 (C++26 on the horizon).  
- **LLM-native** — but not LLM-exclusive. Any GenAI model can be a node.  
- **CPU-first** — no forced GPU dependency; CUDA is a plug-in, not a crutch.  
- **Bare-metal where it matters** — optional Assembly for critical paths.  
- **Language-agnostic integration** — Python bindings first, others to follow.  
- **Transparent design** — every abstraction earns its right to exist.  


### Tech Stack

| Layer | Technology |
|-------|-------------|
| **Language** | Modern C++ 23 / 26, C23 |
| **Compiler** | GCC 15.2 + |
| **Platform** | CPU-first (GPU optional via CUDA / SIMD) |
| **Bindings** | Python (initial), Rust / Go planned |
| **Build** | CMake 3.25 + |
| **Tests** | Catch2 / GoogleTest (TBD) |


### Philosophy

> Ravens are intelligent, adaptive, and thrive in the wild.  
> `sifirai` aspires to do the same — lightweight, perceptive, and free.

- Less *framework*, more *engine*.  
- Less *legacy*, more *clarity*.  
- Less *magic*, more *intentional design*.  

Every cycle, every cache line, every instruction counts.  
The goal is *absolute control without losing elegance.*
