#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "RangeandFrequency.h"
int Samples[] = {4,5};

TEST_CASE("test the frequency of samples") 
{
 REQUIRE(getfrequency(Samples) == 2);
}
