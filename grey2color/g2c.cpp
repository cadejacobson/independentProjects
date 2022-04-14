#include "g2c.h"

int main( int argc, char **argv)
{
    image greyPic, colorPic;
    ifstream fin;
    ofstream fout;

    if( argc != 3 )
    {
        cout << "Usage statement here" << endl;
        return -1;
    }
    
    fin.open( argv[1] );                         //move into own function later
    if( !fin.is_open() )
        return -1;

    fout.open(argv[2]);                          //move into own function later
    if( !fout.is_open() )
        return -1;

    if( !allocateGray( greyPic ) );
        return -2;
    if( !allocateColor( colorPic ) );
        return -2;

    fin.close();
    fout.close();

    return 0;
}