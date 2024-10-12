#include <gtest/gtest.h>
#include <string>

// Khai báo hàm cần test
std::string check(double h, int w);

// Test trường hợp input không hợp lệ
TEST(CheckFunctionTest, InvalidInput) {
    EXPECT_EQ(check(1.45, 42), "input khong hop le");  // Chiều cao nhỏ hơn 1.48
   
}

// Test trường hợp trả về size "S"
TEST(CheckFunctionTest, SizeS) {
    EXPECT_EQ(check(1.50, 45), "S");
  
}

// Test trường hợp trả về size "M"
TEST(CheckFunctionTest, SizeM) {
    EXPECT_EQ(check(1.59, 50), "M");
   
}

// Test trường hợp trả về size "L"
TEST(CheckFunctionTest, SizeL) {
    EXPECT_EQ(check(1.62, 53), "L");
    
}

// Test trường hợp trả về size "XL"
TEST(CheckFunctionTest, SizeXL) {
    EXPECT_EQ(check(1.67, 59), "XL");
    
}

// Test trường hợp không xác định được size
TEST(CheckFunctionTest, UnknownSize) {
    EXPECT_EQ(check(1.62, 45), "khong xac dinh");  // khong thoa man du dieu kien
    
}

