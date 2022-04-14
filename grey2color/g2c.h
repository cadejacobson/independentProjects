#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

typedef unsigned char pixel;

#ifndef __image_struct__
#define __image_struct__

struct image
{
    string magicNumber;
    string comment;
    int rows;
    int cols;
    pixel** redGray;
    pixel** green;
    pixel** blue;
};

#endif


bool allocateGray(image& picture);
bool allocateColor(image& picture);