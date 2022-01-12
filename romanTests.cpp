#define CATCH_CONFIG_MAIN
#include "roman.h"
#include "C:\Users\101083765\Source\Repos\csc115f21homework\catch.hpp"


TEST_CASE("romanConversion - first test")
{
    string numeral = "";
    int value;

    value = romanConversion( numeral );
    REQUIRE(value == -1);
}

TEST_CASE("romanConversion - testing one")
{
    string numeral = "I";
    int value;

    value = romanConversion(numeral);
    REQUIRE(value == 1);
}