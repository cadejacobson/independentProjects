#include "leapYears.h"

bool isLeapYear( string year )
{
    char posZero = year[0];

    if( !isdigit(posZero) )
        return false;

    int conversion = stoi( year );

    if( conversion % 4 == 0 )
    {
        if(conversion % 100 == 0 && conversion % 400 != 0)
            return false;

        return true;
        
    }

    return false;
}
