# src/CMakeLists.txt

# Tạo thư viện cho mã nguồn chính
add_library(mycode mycode.cpp)

# Đảm bảo thư viện được xây dựng trước các tests
target_include_directories(mycode PUBLIC ../include)
