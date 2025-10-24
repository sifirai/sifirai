add_library(tensor)
target_sources(tensor
    PUBLIC
        FILE_SET CXX_MODULES FILES
            tensor.ixx
)
add_library(sifirai::tensor ALIAS tensor)
set_target_properties(tensor PROPERTIES
    CXX_MODULES_DIRECTORY "${CMAKE_BINARY_DIR}/gcm.cache"
)

sifirai_target_properties(tensor)
