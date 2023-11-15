cmake_minimum_required(VERSION 3.14)
project(ON_Test1)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/b10fad38c4026a29ea6561ab15fc4818170d1c10.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
  hello_test
  hello_test.cc
)

target_link_libraries(
  hello_test
  GTest::gtest_main
  /home/ubuntu/dev/opennurbs/build/android_uuid/libandroid_uuid.a
  /home/ubuntu/dev/opennurbs/build/zlib/libzlib.a
  /home/ubuntu/dev/opennurbs/build/libopennurbsStatic.a
)

include(GoogleTest)
gtest_discover_tests(hello_test)

