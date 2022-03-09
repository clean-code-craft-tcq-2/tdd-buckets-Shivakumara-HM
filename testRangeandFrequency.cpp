#define CATCH_CONFIG_MAIN

#include "assert.h"
#include "catch.hpp"
#include "RangeandFrequency.h"

TEST_CASE("Read No of samples from 4-5 range")
{
 assert(ReadNoofSamples(4,5)==2); 
}

TEST_CASE("Read No of samples from 10-12 range")
{
 assert(ReadNoofSamples(10,12)==3);
}
