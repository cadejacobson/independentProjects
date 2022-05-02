#include "g2c.h"



void grey2Color( image &grey, image &color )
{
    int i, j;
    for( i = 0; i < grey.rows; i++ )
    {
        for( j = 0; j < grey.cols; j++ )
        {
            color.redGray[i][j] = grey.redGray[i][j];
            color.green[i][j] = grey.green[i][j];
            color.blue[i][j] = grey.blue[i][j];
        }
    }

    return;
}