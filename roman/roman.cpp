#include "roman.h"

//A function to convert between roman numerals and regular numbers

int romanConversion( string numeral )
{   
    int value = 0;

    if (numeral.empty())
        return -1;

    value = iConversion( numeral );
    
    if( value == -1 )
        return value; //remove later add a separate path


    return value;
}




int iConversion( string numeral )
{
    int i;
    int length = numeral.size();
    int pos;
    char ch;
    int value = 0;
    int increment[7] = {0};

    for (i = 0; i < length; i += 1)
    {
        ch = numeral[i];
        if( ch == 'I' )
            increment[0] += 1;
        if( ch == 'V' )
            increment[1] += 1;
        if( ch == 'X' )
            increment[2] += 1;
        if( ch == 'L' )
            increment[3] += 1;
        if( ch == 'C' )
            increment[4] += 1;
        if( ch == 'D' )
            increment[5] += 1;
        if( ch == 'M' )
            increment[6] += 1;
    }

    for( i = 0 ; i < 7 ; i += 1)
    {
        if( increment[i] == length )
        {
            if( i == 0 )
                value = increment[0];
            if( i == 1 )
                value = 5;
            if( i == 2 )
                value = 10 * increment[2];
            if( i == 3 )
                value = 50;
            if( i == 4 )
                value = 100 * increment[4];

            return value;
        }
    }

    return -1;
}
