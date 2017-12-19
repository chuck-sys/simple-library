set(src
    lib.cc)

include_directories(${simple-lib_SOURCE_DIR}/include)

add_library(slib ${src})
