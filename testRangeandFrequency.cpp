#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "RangeandFrequency.h"
int Samples[] = {4,5};

TEST_CASE("test the current range and samples") 
{
 REQUIRE(getrange(Samples) == 2);
}
