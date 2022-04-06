#define CATCH_CONFIG_MAIN
#include "C:\Users\101083765\Source\Repos\csc115f21homework\catch.hpp"
#include "circular.h"

TEST_CASE( "Circular Linked List" )
{
    circularList list;
    ostringstream sout;
    ostringstream sout1;
    string n = ", ";

    SECTION( "no elements" )
    {
        REQUIRE(list.size() == 0);
        REQUIRE(list.empty() == true);
    }
    
    list.insert(50);

    SECTION( "one element" )
    {
        REQUIRE(list.size() == 1);
        REQUIRE(list.empty() == false);

        list.print(sout, ", ");
        REQUIRE(sout.str() == "50");
    }

    
    SECTION( "front" )
    {
        list.insert(40);
        list.print(sout, ", ");
        REQUIRE( sout.str() == "40, 50" );
        REQUIRE(list.size() == 2);
        REQUIRE( list.retrievePosition(40) == 1 );

        list.insert(35);
        list.insert(30);
        list.insert(20);
        list.print( sout1, n);
        REQUIRE( list.size() == 5);
        REQUIRE( sout1.str() == "20, 30, 35, 40, 50");
    }

    list.insert(40);


    SECTION( "middle" )
    {
        list.insert( 45 );
        list.print(sout, n);
        REQUIRE( sout.str() == "40, 45, 50");
        REQUIRE( list.find(45) == true );
    }

    SECTION( "more in the middle" )
    {
        list.insert( 42 );
        list.insert( 43 );
        list.insert( 44 );
        list.print(sout, n);
        REQUIRE( sout.str() == "40, 42, 43, 44, 50");
        REQUIRE(list.find(42) == true);
        REQUIRE(list.find(43) == true);
        REQUIRE(list.find(400) == false);
    }

    SECTION( "ending" )
    {
        list.insert( 500 );
        list.print( sout, n );
        REQUIRE( sout.str() == "40, 50, 500");
    }

}