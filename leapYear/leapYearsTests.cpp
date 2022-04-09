#define CATCH_CONFIG_RUNNER
#include "leapYears.h"
#include "C:\Users\101083765\Source\Repos\csc115f21homework\catch.hpp"


const bool RUNCATCH = true;

int main( int argc, char** argv)
{
    Catch::Session session;
    int result;

    if( RUNCATCH )
    {
        result = session.run();
        if(result != 0)
        {
            cout << "Test cases didn't pass." << endl;
            return result;
        }
    }
    
    
    
    return 0;
}



TEST_CASE( "isLeapYear - testing not a digit" )
{
    string year = "J";
    bool result;

    result = isLeapYear( year );
    REQUIRE( result == false );
}


TEST_CASE( "isLeapYear - testing a leap year" )
{
    string year = "2024";
    bool result;

    result = isLeapYear( year );
    REQUIRE( result == true );
}


TEST_CASE( "isLeapYear - testing an error" )
{
    string year = "1700";
    bool result;

    result = isLeapYear( year );
    REQUIRE( result == false );
}

TEST_CASE( "isLeapYear - testing one more 400 year error" )
{
    string year = "2400";
    bool result;

    result = isLeapYear( year );
    REQUIRE( result == true );
}
