#define CATCH_CONFIG_MAIN
#include "C:\Users\101083765\Source\Repos\csc115f21homework\catch.hpp"
#include "ff.h"

TEST_CASE("rushPoints - testing 0 rush yards")
{
    double rushYards = 0;
    double points;
    
    points = rushPoints(rushYards);
    REQUIRE(points == 0);
}

TEST_CASE("rushPoints - testing 100 rush yards")
{
    double rushYards = 100;
    double points;
    
    points = rushPoints(rushYards);
    REQUIRE(points == 10);
}

TEST_CASE("rushPoints - testing 123 rush yards")
{
    double rushYards = 123;
    double points;
    
    points = rushPoints(rushYards);
    REQUIRE(points == 12.3);
}

TEST_CASE("tdPoints - testing 1 touchdown")
{
    int tdCount = 1;
    int points;
    
    points = tdPoints(tdCount);
    REQUIRE(points == 6);
}

TEST_CASE("tdPoints - testing 0 touchdown")
{
    int tdCount = 0;
    int points;
    
    points = tdPoints(tdCount);
    REQUIRE(points == 0);
}

TEST_CASE("tdPoints - testing 6 touchdown")
{
    int tdCount = 6;
    int points;
    
    points = tdPoints(tdCount);
    REQUIRE(points == 36);
}

TEST_CASE("recPoints - testing 0 rec yards")
{
    double recYards = 0;
    double points;
    
    points = recPoints(recYards);
    REQUIRE(points == 0);
}

TEST_CASE("recPoints - testing 150 rec yards")
{
    double recYards = 150;
    double points;
    
    points = recPoints(recYards);
    REQUIRE(points == 15);
}

TEST_CASE("recPoints - testing 226 rec yards")
{
    double recYards = 226;
    double points;
    
    points = recPoints(recYards);
    REQUIRE(points == 22.6);
}

TEST_CASE("pprRec - counting 0 receptions")
{
    double recCount = 0;
    double points;
    
    points = pprRec(recCount);
    REQUIRE(points == 0);
}

TEST_CASE("pprRec - counting 5 receptions")
{
    double recCount = 5;
    double points;
    
    points = pprRec(recCount);
    REQUIRE(points == 5);
}

TEST_CASE("playerPoints - testing one of each")
{
    string playerNames[1] = {"Larry Fitz"};
    int fantasyPts[1] = {76};
    int size = 1;
    string winner;
    
    winner = winningPlayer(playerNames, fantasyPts, size);
    REQUIRE(winner == "Larry Fitz");
}

TEST_CASE("playerPoints - testing three of each")
{
    string playerNames[3] = {"Larry Fitz", "Jack Daniels", "Zach Wilson"};
    int fantasyPts[3] = {76, 112, 310};
    int size = 3;
    string winner;
    
    winner = winningPlayer(playerNames, fantasyPts, size);
    REQUIRE(winner == "Zach Wilson");
}
