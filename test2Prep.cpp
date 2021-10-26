#define CATCH_CONFIG_MAIN
#include "C:\Users\101083765\Source\Repos\csc115f21homework\catch.hpp"
#include "bubbleSort.h"


TEST_CASE("bubbleSort - testing a single flip")
{
    double array[3] = {0, 2, 1};
    int size = 3;
    char order = 'A';
    
    bubbleSort(array, size, order);
    REQUIRE(array[0] == 0);
    REQUIRE(array[1] == 1);
    REQUIRE(array[2] == 2);
}


TEST_CASE("bubbleSort - testing a larger array")
{
    double array[6] = {0, 2, 1, 3, -1, -2};
    int size = 6;
    char order = 'A';
    
    bubbleSort(array, size, order);
    REQUIRE(array[0] == -2);
    REQUIRE(array[1] == -1);
    REQUIRE(array[2] == 0);
    REQUIRE(array[5] == 3);
}


TEST_CASE("bubbleSort - testing decimals")
{
    double array[8] = {-.69372, -.69371, -1000, 999, 1, 222, 1414, 44444};
    int size = 8;
    char order = 'A';
    
    bubbleSort(array, size, order);
    REQUIRE(array[0] == -1000);
    REQUIRE(array[1] == -.69372);
    REQUIRE(array[2] == -.69371);
    REQUIRE(array[5] == 999);
    REQUIRE(array[6] == 1414);
    REQUIRE(array[7] == 44444);
}


TEST_CASE("selectionSort - testing a single flip")
{
    double array[2] = {3, 2};
    int size = 2;
    
    selectionSort(array, size);
    CHECK(array[0] == 2);
    CHECK(array[1] == 3);
}

TEST_CASE("selectionSort - testing a 5 flips")
{
    double array[5] = {3, 2, 1, 5, 0};
    int size = 5;
    
    selectionSort(array, size);
    CHECK(array[0] == 0);
    CHECK(array[1] == 1);
    CHECK(array[2] == 2);
    CHECK(array[3] == 3);
    CHECK(array[4] == 5);
}

TEST_CASE("blindSort - testing a 5 flips")
{
    double array[5] = {3, 2, 1, 5, 0};
    int size = 5;
    
    blindSort(array, size);
    CHECK(array[0] == 0);
    CHECK(array[1] == 1);
    CHECK(array[2] == 2);
    CHECK(array[3] == 3);
    CHECK(array[4] == 5);
}

TEST_CASE("bubSort - testing a 5 flips")
{
    double array[5] = {3, 2, 1, 5, 0};
    int size = 5;
    
    bubSort(array, size);
    CHECK(array[0] == 0);
    CHECK(array[1] == 1);
    CHECK(array[2] == 2);
    CHECK(array[3] == 3);
    CHECK(array[4] == 5);
}


TEST_CASE("binSearch - testing a 5 selection")
{
    int array[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int value = 2;
    int location;
    
    location = binSearch(array, size, value);
    REQUIRE(location == 1);
}

TEST_CASE("binSearch - testing a 10 selection")
{
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;
    int value = 10;
    int location;
    
    location = binSearch(array, size, value);
    REQUIRE(location == 9);
}


TEST_CASE("binSearch - testing the bottom boundary")
{
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;
    int value = 1;
    int location;
    
    location = binSearch(array, size, value);
    REQUIRE(location == 0);
}

TEST_CASE("binSearch - testings a larger array")
{
    int array[14] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 22, 25, 27, 30};
    int size = 14;
    int value = 4;
    int location;
    
    location = binSearch(array, size, value);
    REQUIRE(location == 3);
}