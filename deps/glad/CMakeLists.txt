project(glad C)

add_library(glad)
target_sources(glad PRIVATE "src/gl.c")
target_include_directories(glad PUBLIC "include")
set_property(TARGET glad PROPERTY C_STANDARD 99)