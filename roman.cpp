#include "roman.h"

//A function to convert between roman numerals and regular numbers

int romanConversion ( string numeral )
{
    int i;
    int length = numeral.size();
    int pos;
    char ch;
    int value = 0;
    
    for (i = 0; i < length; i += 1)
    {
        ch = numeral[i];
        if (ch == 'I')
            value = 1;

        return value;
    }

    return -1;
}