#define CATCH_CONFIG_MAIN

#include "assert.h"
#include "catch.hpp"
#include "RangeandFrequency.h"

int NoOfSamples=0;

TEST_CASE("Read No of samples from 4-5 range")
{
 NoOfSamples=ReadNoofSamples(4,5);
 REQUIRE(NoOfSamples == 2);
}

TEST_CASE("Read No of samples from 10-12 range")
{
 NoOfSamples=ReadNoofSamples(10,12);
 REQUIRE(NoOfSamples == 3);
}

