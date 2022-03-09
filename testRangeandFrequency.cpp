#define CATCH_CONFIG_MAIN

#include "catch.hpp"

TEST_CASE("test the current range and samples") 
{
  REQUIRE(getrange({4,5}) == {4,5});
  REQUIRE(getcount({4,5}) == 2);
}
