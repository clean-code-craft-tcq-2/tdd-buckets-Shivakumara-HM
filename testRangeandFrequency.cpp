#define CATCH_CONFIG_MAIN

#include "assert.h"
#include "catch.hpp"
#include "RangeandFrequency.h"

int CurrentSamples1[4] = {3, 3, 5, 4};
int CurrentSamples2[3] = {10,11,12};
int CurrentSamples3[7] = {-3, 3 ,-5, -4, -3, 11, 12};

TEST_CASE("Read No of samples from range 3 to 5")
{
 int Samples = sizeof(CurrentSamples1)/sizeof(CurrentSamples1[0]);
 int TotalNoOfSamples = ReadNoOfSamples(CurrentSamples1, Samples);
 REQUIRE(TotalNoOfSamples == 4);
}

TEST_CASE("Read No of samples from range 10 to 12")
{
 int Samples = sizeof(CurrentSamples2)/sizeof(CurrentSamples2[0]);
 int TotalNoOfSamples = ReadNoOfSamples(CurrentSamples2, Samples);
 REQUIRE(TotalNoOfSamples == 3);
}

TEST_CASE("Read No of samples from range 3 to 12")
{
 int Samples = sizeof(CurrentSamples3)/sizeof(CurrentSamples3[0]);
 int TotalNoOfSamples = ReadNoOfSamples(CurrentSamples3, Samples);
 REQUIRE(TotalNoOfSamples == 7);
}


