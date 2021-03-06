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
    
    fin.open( string(argv[1]) + ".pgm" );       //move into own function later
    if( !fin.is_open() )
    {
        cout << "Unable to open input file " << string(argv[1]) + ".pgm" << endl;
        return -1;
    }

    fout.open( string(argv[2]) + ".pgm" );      //move into own function later
    if( !fout.is_open() )
    {
        cout << "Unable to open output file " << string(argv[2]) + ".pgm" << endl;
        return -1;
    }


    headerInput( fin, greyPic );


    colorPic.rows = greyPic.rows;
    colorPic.cols = greyPic.cols;
    colorPic.comment = greyPic.comment;
    colorPic.magicNumber = "P6";

    if( !allocateGray( greyPic ) )
        return -2;
    if( !allocateColor( colorPic ) )            //initialize values
        return -2;

    fillArray( fin, greyPic );
    grey2Color( greyPic, colorPic );
    //outputColor( fout, colorPic );
    outputGrey( fout, greyPic );

    deleteColor( colorPic );
    deleteGrey( greyPic );

    fin.close();
    fout.close();

    return 0;
}