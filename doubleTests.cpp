#define CATCH_CONFIG_MAIN
#include "C:\Users\101083765\Source\Repos\csc115f21homework\catch.hpp"
#include "doubleList.h"

TEST_CASE( "Double Linked List" )
{
    doubleList list;
    ostringstream sout;
    string sep = ", ";
    
    SECTION( "empty" )
    {
        REQUIRE( list.empty() == true );
        REQUIRE( list.size() == 0 );
    }

    list.insert( 100 );

    SECTION( "single item" )
    {
        REQUIRE( list.empty() == false );
        REQUIRE( list.size() == 1 );
        list.print( sout, sep );
        REQUIRE( sout.str() == "100" );
    }

    list.insert( 10 );

    SECTION( "inserting front" )
    {
        REQUIRE( list.empty() == false );
        REQUIRE( list.size() == 2 );
        list.print( sout, sep );
        REQUIRE( sout.str() == "10, 100" );
    }


    SECTION( "many insertions to the front" )
    {
        list.insert(5);
        list.insert(4);
        list.insert(3);
        list.insert(2);
        list.insert(1);
        REQUIRE( list.size() == 7 );
        list.print( sout, sep );
        REQUIRE( sout.str() == "1, 2, 3, 4, 5, 10, 100" );
    }


    list.insert(5);
    list.insert(4);
    list.insert(3);
    list.insert(2);
    list.insert(1);

    SECTION( "middle" )
    {
        list.insert( 25 );
        REQUIRE( list.size() == 8 );
        list.print( sout, sep );
        REQUIRE( sout.str() == "1, 2, 3, 4, 5, 10, 25, 100" );
    }

    SECTION( "many middle" )
    {
        list.insert( 45 );
        list.insert( 65 );
        list.insert( 8 );
        list.print( sout, sep );
        REQUIRE( sout.str() == "1, 2, 3, 4, 5, 8, 10, 45, 65, 100" );
        REQUIRE( list.find( 8 ) == true );
        REQUIRE( list.find( 100 ) == true );
        REQUIRE( list.find( 1 ) == true );
        REQUIRE( list.find( 3 ) == true );
        REQUIRE( list.find( 10000 ) == false );
    }

    SECTION( "end" )
    {
        list.insert( 1000 );
        list.print( sout, sep );
        REQUIRE( sout.str() == "1, 2, 3, 4, 5, 10, 100, 1000" );
        REQUIRE(list.retrievePosition(-60) == -1);
        REQUIRE( list.retrievePosition( 2 ) == 2 );
        REQUIRE( list.retrievePosition( 5 ) == 5 );
        REQUIRE( list.retrievePosition( 1000 ) == 8);
    }


    list.clear();
    REQUIRE( list.empty() == true );
}