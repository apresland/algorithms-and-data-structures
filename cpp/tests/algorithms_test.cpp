#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <algorithms.h>

TEST_CASE( "Failing test", "[main]" ) {
    std::vector<int> values {3, 1, 7, 4, 9, 0, 2, 6, 8, 5};
    bubble_sort(values);
    
    std::vector<int> expected {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    REQUIRE( (values == expected) );
}
