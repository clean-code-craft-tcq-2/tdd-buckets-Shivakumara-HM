#define CATCH_CONFIG_MAIN

#include "assert.h"
#include "catch.hpp"
#include "RangeandFrequency.h"

int TotalNoOfSamples=0;


/*Reading occurance betweeen 5-10 range */
TEST_CASE("Read No of samples from 5-10 range")
{
 TotalNoOfSamples=ReadNoofSamples(5,10);
 REQUIRE(TotalNoOfSamples == 2);
}

/*Reading occurance betweeen 3-5 range */
TEST_CASE("Read No of samples from 3-5 range")
{
 TotalNoOfSamples=ReadNoofSamples(3,5);
 REQUIRE(TotalNoOfSamples == 4);
}

/*Reading occurance betweeen 3-12 range */
TEST_CASE("Read No of samples from 3-12 range")
{
 TotalNoOfSamples=ReadNoofSamples(3,12);
 REQUIRE(TotalNoOfSamples == 7);
}
