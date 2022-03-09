#define CATCH_CONFIG_MAIN

#include "assert.h"
#include "catch.hpp"
#include "RangeandFrequency.h"

int NoOfSamples=0;


/*Reading occurance betweeen 5-10 range */
TEST_CASE("Read No of samples from 5-10 range")
{
 NoOfSamples=ReadNoofSamples(5,10);
 REQUIRE(NoOfSamples == 2);
}

/*Reading occurance betweeen 3-5 range */
TEST_CASE("Read No of samples from 3-5 range")
{
 NoOfSamples=ReadNoofSamples(3,5);
 REQUIRE(NoOfSamples == 4);
}

/*Reading occurance betweeen 3-12 range */
TEST_CASE("Read No of samples from 3-12 range")
{
 NoOfSamples=ReadNoofSamples(3,12);
 REQUIRE(NoOfSamples == 7);
}
