// Copyright (c) xiyang.jia
// Licensed under the MIT license.

#include "add.hpp"

#include <limits.h>

#include "gtest/gtest.h"
namespace {

// Tests factorial of negative numbers.
TEST(AddTest, Negative) { EXPECT_EQ(-3.0, add(-1.0, -2.0)); }

TEST(AddTest, Positive) { EXPECT_EQ(3.0, add(1.0, 2.0)); }

}  // namespace
