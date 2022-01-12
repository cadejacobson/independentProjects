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

    value = romanConversion( numeral );
    REQUIRE(value == 1);
}


TEST_CASE("romanConversion - testing three")
{
    string numeral = "III";
    int value;

    value = romanConversion( numeral );
    REQUIRE( value == 3 );
}

TEST_CASE("romanConversion - testing Five")
{
    string numeral = "V";
    int value;

    value = romanConversion(numeral);
    REQUIRE(value == 5);
}

TEST_CASE("romanConversion - testing ten")
{
    string numeral = "X";
    int value;

    value = romanConversion(numeral);
    REQUIRE(value == 10);
}


TEST_CASE("romanConversion - testing tirty")
{
    string numeral = "XXX";
    int value;

    value = romanConversion(numeral);
    REQUIRE(value == 30);
}


TEST_CASE("romanConversion - testing fifty")
{
    string numeral = "L";
    int value;

    value = romanConversion(numeral);
    REQUIRE(value == 50);
}


TEST_CASE("romanConversion - testing 100")
{
    string numeral = "C";
    int value;

    value = romanConversion(numeral);
    REQUIRE(value == 100);
}


TEST_CASE("romanConversion - testing 300")
{
    string numeral = "CCC";
    int value;

    value = romanConversion(numeral);
    REQUIRE(value == 300);
}