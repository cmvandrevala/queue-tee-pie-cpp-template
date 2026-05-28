#include <catch2/catch_test_macros.hpp>

#include "../src/queue.hpp"

// You can delete this test case and replace it with your own tests
TEST_CASE( "it returns a response" ) {
  REQUIRE( queue() == "This is an example function. You can delete it when you start this lab!" );
}
