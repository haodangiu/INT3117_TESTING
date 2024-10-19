cmake_minimum_required(VERSION 3.10)
project(MyProject)

# Thiết lập chuẩn C++
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Thêm thư mục include
include_directories(include)

# Thêm thư mục src và tests
add_subdirectory(src)
add_subdirectory(tests)
