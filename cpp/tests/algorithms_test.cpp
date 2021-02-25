#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <algorithms.h>

TEST_CASE( "Failing test", "[main]" ) {
    std::vector<int> values {3, 1, 2};
    bubble_sort(values);
    REQUIRE( values[0] == 1 );
}
