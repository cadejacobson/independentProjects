#include "g2c.h"







bool allocateGray(image& picture)
{
    picture.redGray = nullptr;
    int i;

    picture.redGray = new (nothrow) pixel * [picture.rows];
    if (picture.redGray == nullptr)       //allocate three pointers of pointers
    {
        cout << "Unable to allocate memory." << endl;
        return false;
    }

    for (i = 0; i < picture.rows; i += 1)   //allocate an array for each 
    {                                       //row with the size of the columns.
        picture.redGray[i] = new (nothrow) pixel[picture.cols];
        if (picture.redGray[i] == nullptr)
        {
            cout << "Unable to allocate memory." << endl;
            return false;
        }
    }

    return true;
}



bool allocateColor(image& picture)
{
    picture.redGray = nullptr;
    picture.blue = nullptr;
    picture.green = nullptr;
    int i;

    picture.redGray = new (nothrow) pixel * [picture.rows];
    if (picture.redGray == nullptr)       //allocate three pointers of pointers
    {
        cout << "Unable to allocate memory." << endl;
        return false;
    }

    picture.blue = new (nothrow) pixel * [picture.rows];
    if (picture.blue == nullptr)
    {
        cout << "Unable to allocate memory." << endl;
        return false;
    }

    picture.green = new (nothrow) pixel * [picture.rows];
    if (picture.green == nullptr)
    {
        cout << "Unable to allocate memory." << endl;
        return false;
    }

    for (i = 0; i < picture.rows; i += 1)   //allocate an array for each 
    {                                       //row with the size of the columns.
        picture.redGray[i] = new (nothrow) pixel[picture.cols];
        if (picture.redGray[i] == nullptr)
        {
            cout << "Unable to allocate memory." << endl;
            return false;
        }

        picture.blue[i] = new (nothrow) pixel[picture.cols];
        if (picture.blue[i] == nullptr)
        {
            cout << "Unable to allocate memory." << endl;
            return false;
        }

        picture.green[i] = new (nothrow) pixel[picture.cols];
        if (picture.green[i] == nullptr)
        {
            cout << "Unable to allocate memory." << endl;
            return false;
        }
    }

    return true;
}




void deleteColor(image picture)
{
    int i;


    for (i = 0; i < picture.rows; i += 1)       //delete each row of pointers
    {
        delete[] picture.redGray[i];
        delete[] picture.blue[i];
        delete[] picture.green[i];
    }

    delete[] picture.redGray;             //delete the original three pointers
    delete[] picture.blue;
    delete[] picture.green;

    return;
}


void deleteGrey(image picture)
{
    int i;


    for (i = 0; i < picture.rows; i += 1)       //delete each row of pointers
    {
        delete[] picture.redGray[i];
    }

    delete[] picture.redGray;             //delete the original three pointers


    return;
}


