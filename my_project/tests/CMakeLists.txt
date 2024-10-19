# tests/CMakeLists.txt

# Sử dụng FetchContent để tải Google Test
include(FetchContent)

FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/release-1.12.1.zip
)

# Cấu hình để không build các tests của Google Test
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Tạo executable cho unit tests
add_executable(runUnitTests test_mycode.cpp)

# Liên kết thư viện với Google Test và mã nguồn chính
target_link_libraries(runUnitTests
  gtest_main
  mycode
)

# Đăng ký test
include(GoogleTest)
gtest_discover_tests(runUnitTests)
