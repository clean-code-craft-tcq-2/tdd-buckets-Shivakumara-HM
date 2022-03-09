#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "RangeandFrequency.h"
int Samples[7] = {3, 3, 5, 4, 10, 11, 12};

TEST_CASE("test the current range and samples") 
{
  REQUIRE(getrange({4,5}) == {4,5}));
  REQUIRE(getfrequency({4,5}) == 2);
}
