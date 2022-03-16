#define CATCH_CONFIG_MAIN

#include "assert.h"
#include "catch.hpp"
#include "RangeandFrequency.h"

int CurrentSamples1[4] = {3, 3, 5, 4};
int CurrentSamples2[3] = {10,11,12};

TEST_CASE("Read No of samples from range")
{
 int Samples = sizeof(CurrentSamples1)/sizeof(CurrentSamples1[0]);
 NoOfSamples=ReadNoofSamples(CurrentSamples1, Samples);
 REQUIRE(NoOfSamples == 2);
}

TEST_CASE("Read No of samples from range")
{
 int Samples = sizeof(CurrentSamples2)/sizeof(CurrentSamples2[0]);
 NoOfSamples=ReadNoofSamples(CurrentSamples2, Samples);
 REQUIRE(NoOfSamples == 3);
}

