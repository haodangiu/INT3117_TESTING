#include <gtest/gtest.h>
#include "mycode.h"

// Test case cho hàm add với số dương
TEST(AdditionTest, PositiveNumbers) {
    EXPECT_EQ(add(1, 2), 3);
    EXPECT_EQ(add(10, 20), 30);
}

// Test case cho hàm add với số âm
TEST(AdditionTest, NegativeNumbers) {
    EXPECT_EQ(add(-1, -2), -3);
    EXPECT_EQ(add(-10, -20), -30);
}

// Test case cho hàm add với số dương và số âm
TEST(AdditionTest, MixedNumbers) {
    EXPECT_EQ(add(1, -2), -1);
    EXPECT_EQ(add(-10, 20), 10);
}

// Test case cho hàm add với số 0
TEST(AdditionTest, WithZero) {
    EXPECT_EQ(add(0, 0), 0);
    EXPECT_EQ(add(0, 5), 5);
    EXPECT_EQ(add(-5, 0), -5);
}
