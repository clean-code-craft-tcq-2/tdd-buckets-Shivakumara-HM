#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "RangeandFrequency.h"

TEST_CASE("Read No of sequence samples from an array of 12 consecutive samples")
{
 int CurrentAnalogSamples[12] ={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11,12};
 int Samples = sizeof(CurrentAnalogSamples)/sizeof(CurrentAnalogSamples[0]);
 int TotalNoOfSamples=ReadNoOfSamples(CurrentAnalogSamples, Samples);
 REQUIRE(TotalNoOfSamples == 1);
}

TEST_CASE("Read No of sequence samples from an array of 0 as values")
{
 int CurrentAnalogSamples[12] ={0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
 int Samples = sizeof(CurrentAnalogSamples)/sizeof(CurrentAnalogSamples[0]);
 int TotalNoOfSamples=ReadNoOfSamples(CurrentAnalogSamples, Samples);
 REQUIRE(TotalNoOfSamples == 1);
}

TEST_CASE("Check the no of sequence sample in an invalid array")
{
 int CurrentAnalogSamples[12] ={1, 4095, 3, 4, 5, 6, 7, 4096, 9, 10, 4093,4094};
 int Samples = sizeof(CurrentAnalogSamples)/sizeof(CurrentAnalogSamples[0]);
 int TotalNoOfSamples=ReadNoOfSamples(CurrentAnalogSamples, Samples);
 REQUIRE(TotalNoOfSamples == 2);
}

TEST_CASE("Read No of sequence samples from an array of Random Analogsamples")
{
 int CurrentAnalogSamples[12] ={409, 818, 1228, 1637, 2047, 2456, 2866, 3275, 3685, 4094, 4503,4918};
 int Samples = sizeof(CurrentAnalogSamples)/sizeof(CurrentAnalogSamples[0]);
 int TotalNoOfSamples=ReadNoOfSamples(CurrentAnalogSamples, Samples);
 REQUIRE(TotalNoOfSamples == 4);
}



