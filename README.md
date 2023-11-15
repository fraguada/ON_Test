# Google Test and OpenNURBS

This is a basic project to get OpenNURBS working with Google Test.

Based on this Google Test Quickstart: https://google.github.io/googletest/quickstart-cmake.html

## building & running

- `cmake -S . -B build`
- `cmake --build build`
- `cd build && ctest`

Note: OpenNURBS is cloned to a separate external directory. OpenNURBS build artifacts are in `opennurbs/build``