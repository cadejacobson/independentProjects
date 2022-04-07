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

    list.insert( 1 );

    SECTION( "inserting front" )
    {
        REQUIRE( list.empty() == false );
        REQUIRE( list.size() == 2 );
        list.print( sout, sep );
        REQUIRE( sout.str() == "1, 100" );

    }
}