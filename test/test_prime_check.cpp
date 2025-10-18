#include <iostream>
#include <gtest/gtest.h>
#include <utility>
#include "prime_check.hpp"

class PrimeCheckTest : public ::testing::TestWithParam<std::pair<int, bool>> {};

TEST_P(PrimeCheckTest, DetectsPrimeNumbers)
{
  auto [num, expected]= GetParam();
  prime_number pnum;
  EXPECT_EQ(pnum.is_prime(num), expected);
}

INSTANTIATE_TEST_SUITE_P(
   PrimeTests,
   PrimeCheckTest,
   ::testing::Values(
       std::make_pair(2, true),
       std::make_pair(3, true),
       std::make_pair(4, false),
       std::make_pair(17, true),
       std::make_pair(20, false)
       )
);

int main(int argc, char **argv)
{
   ::testing::InitGoogleTest(&argc, argv);
   return RUN_ALL_TESTS();
}
