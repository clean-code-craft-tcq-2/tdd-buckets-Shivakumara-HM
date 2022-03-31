#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "RangeandFrequency.h"

int CurrentAnalogSamples[12] ={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11,12};

TEST_CASE("Read No of sequence samples from an array of 12 consecutive samples")
{
 int Samples = sizeof(CurrentAnalogSamples)/sizeof(CurrentAnalogSamples[0]);
 int TotalNoOfSamples=ReadNoOfSamples(CurrentAnalogSamples, Samples);
 REQUIRE(TotalNoOfSamples == 12);
}


