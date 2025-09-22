#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/hello.hpp"

TEST_CASE("it returns Hello World")
{
    REQUIRE(functionValue(0) == 1);
    REQUIRE(functionValue(1) == 2);
    REQUIRE(functionValue(2) == 3);
    REQUIRE(functionValue(3) == 4);
}
