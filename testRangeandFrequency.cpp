#define CATCH_CONFIG_MAIN

#include "assert.h"
#include "catch.hpp"
#include "RangeandFrequency.h"

int CurrentSamples[7] = {3, 3, 5, 4, 10, 11, 12};

TEST_CASE("Read No of samples from range")
{
 int Samples = sizeof(CurrentSamples)/sizeof(CurrentSamples[0]);
 NoOfSamples=ReadNoofSamples(CurrentSamples, Samples);
 REQUIRE(NoOfSamples == 2);
}

