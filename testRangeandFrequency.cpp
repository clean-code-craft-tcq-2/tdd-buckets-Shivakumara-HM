#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "RangeandFrequency.h"
int TotalNoOfSamples;

TEST_CASE("Read No of samples from 4-5 range")
{
 TotalNoOfSamples=ReadNoofSamples(4,5);
 REQUIRE(TotalNoOfSamples == 2);
}

TEST_CASE("Read No of samples from 10-12 range")
{
 TotalNoOfSamples=ReadNoofSamples(10,12);
 REQUIRE(TotalNoOfSamples == 3);
}
