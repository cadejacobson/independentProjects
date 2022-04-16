#include "g2c.h"


void headerInput(ifstream& fin, image& picture)
{
    string tempComment = "";
    string line;
    int appendCount = 0;
    int i = 0;
    int j = 0;

    fin >> picture.magicNumber;
    fin.ignore();

    while (fin.peek() == '#')           //check if the next line is a comment
    {
        if (appendCount != 0)
            tempComment.push_back('\n');
        getline(fin, line);
        tempComment.append(line);         //if so, add it to the comment string
        appendCount += 1;
    }

    picture.comment = tempComment;

    fin >> picture.cols;                //store the columns first, then rows.
    fin >> picture.rows;

    getline(fin, line);         //ignore the next two lines by reading them in
    getline(fin, line);


    return;
}
