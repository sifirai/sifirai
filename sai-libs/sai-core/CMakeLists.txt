add_library(sai_core STATIC)
add_library(sai::core ALIAS sai_core)

target_sources(sai_core
    PUBLIC
        FILE_SET CXX_MODULES FILES
           src/core.ixx
)
