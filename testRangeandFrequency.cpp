#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "RangeandFrequency.h"
int Samples[] = {3,3,5,4,10,11,12};

TEST_CASE("test the frequency of samples") 
{
 REQUIRE(getfrequency(Samples) == 2);
}
