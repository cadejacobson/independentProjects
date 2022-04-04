#include "sha2.h"

int main()
{
    string sent;
    string bin = "";
    bitset<8> bits;
    double h0, h1, h2, h3, h4, h5, h6, h7;

    int i;
    double arr[64] = {};

    cout << "Please enter the sentence you would like to encrypt: " << endl;

    getline( cin, sent );

    cout << endl;

    cout << "Your phrase represented as bytes is: " << endl;

    for ( i = 0; i < sent.length(); i += 1 )
    {
        cout << bitset<8>( sent[i] ) << endl;
        bits = bitset<8>( sent[i] );
        bin.append( bits.to_string() );
    }

    bin.append( "1" );

    while( bin.size() != 448 )
    {
        bin.append( "0" );
    }

    cout << endl;

    cout << "Your phrase represented as 448 bytes is: " << endl;

    for (i = 0; i < bin.length(); i += 1)
    {
        if (i % 64 == 0 && i != 0)
            cout << endl;
        if (i % 8 == 0 && i % 64 != 0 && i != 0)
            cout << " ";
        cout << bin[i];
    }
    cout << endl << endl;

    for( i = 0; i < 56; i += 1 )
    {
        bin.append( "0" );
    }

    bin.append( "01011000" );

    cout << "Finally, your phrase represented as 512 bytes is: " << endl;

    for (i = 0; i < bin.length(); i += 1)
    {
        if (i % 64 == 0 && i != 0)
            cout << endl;
        if (i % 8 == 0 && i % 64 != 0 && i != 0)
            cout << " ";
        cout << bin[i];
    }


    h0 = 0x6a09e667;
    h1  = 0xbb67ae85;
    h2  = 0x3c6ef372;
    h3  = 0xa54ff53a;
    h4  = 0x510e527f;
    h5  = 0x9b05688c;
    h6  = 0x1f83d9ab;
    h7  = 0x5be0cd19;

    cout << endl;
    arrayAssign( arr );

    
    return 0;
}


void arrayAssign( double arr[] )
{
    int i;
    double ans;
    int prime = 0;

    for( i = 0; i < 64; i += 1 )
    {
        while( !isPrime( prime ) )
        {
            prime += 1; 
        }
        arr[i] = prime;
        cout << arr[i] << endl;
        prime += 1;
    }

    return;
}




bool isPrime(int number)
{
    if (number <= 1) {
        return false;
    }

    if (number == 2) {
        return true;
    }

    if (number % 2 == 0) {
        return false;
    }

    if (number > 2) {
        int i = 3;
        int remainder;

        while (i < number) {
            remainder = number % i;
            if (remainder == 0) {
                return false;
            }

            i += 2;

        }
        return true;
    }
    return true;
}