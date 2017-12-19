#include "gtest/gtest.h"
#include "inc.h"

using lib::abs;

TEST(AbsFunction, Functionality) {
    ASSERT_EQ(abs(50), 50);
    ASSERT_EQ(abs(-50), 50);
    ASSERT_EQ(abs(0), 0);
}

TEST(AbsFunction, DifferentTypes) {
    ASSERT_EQ(abs(25.376), 25.376);
    ASSERT_EQ(abs(-2.537), 2.537);

    ASSERT_EQ(abs(3e10), 3e10);
    ASSERT_EQ(abs(-4e11), 4e11);
    ASSERT_EQ(abs(4.2e-19), 4.2e-19);
    ASSERT_EQ(abs(-5.4e-23), 5.4e-23);
}
