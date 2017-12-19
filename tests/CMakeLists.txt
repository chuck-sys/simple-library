set(src
    Main.cc
    TestAbs.cc)

add_executable(slib_test ${src})

include_directories("${simple-lib_SOURCE_DIR}/include")

target_link_libraries(slib_test gtest)
target_link_libraries(slib_test gtest_main)
target_link_libraries(slib_test slib)

add_test(
    NAME atest
    COMMAND build/tests/slib_test
    WORKING_DIRECTORY ${simple-lib_SOURCE_DIR})
