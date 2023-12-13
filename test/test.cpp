#include "gtest/gtest.h"
#include "ViewCounter.hpp"

TEST(Test, Initial) {
    ViewCounter c;
    EXPECT_EQ(c.get(), 0);
}

TEST(Test, IncrementAndGet) {
    ViewCounter c;
    c.increment();
    EXPECT_EQ(c.get(), 1);
    c.increment();
    EXPECT_EQ(c.get(), 2);
}