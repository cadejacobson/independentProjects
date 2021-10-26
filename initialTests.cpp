#define CATCH_CONFIG_MAIN
#include "C:\Users\101083765\Source\Repos\csc115f21homework\catch.hpp"
#include "initial.h"

TEST_CASE("getInitials - testing the length function")
{
    string name = "J";
    string style = "FML";
    string init;
    
    init = getInitials(name, style);
    REQUIRE(init == "J");
}

TEST_CASE("getInitials - testing a single name")
{
    string name = "Jerry";
    string style = "FML";
    string init;
    
    init = getInitials(name, style);
    REQUIRE(init == "J");
}


TEST_CASE("getInitials - testing a two Names")
{
    string name = "Bon Jovi";
    string style = "FML";
    string init;
    
    init = getInitials(name, style);
    REQUIRE(init == "BJ");
}


TEST_CASE("getInitials - testing three names")
{
    string name = "Iron Mike Tyson";
    string style = "FML";
    string init;
    
    init = getInitials(name, style);
    REQUIRE(init == "IMT");
}


TEST_CASE("countSpace - testing one space")
{
    string name = "J J";
    int value;
    
    value = countSpace(name);
    REQUIRE(value == 1);
}

TEST_CASE("countSpace - testing three spaces")
{
    string name = "J J J jjjjj j";
    int value;
    
    value = countSpace(name);
    REQUIRE(value == 4);
}