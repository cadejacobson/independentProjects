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



void fillArray(ifstream& fin, image& picture )
{
    int i = 0;
    int j = 0;
    int input = 0;

    while (i < picture.rows)
    {
        j = 0;
        while (j < picture.cols)
        {
            fin.read((char*)&input, sizeof(pixel)); //read each into an integer
            picture.redGray[i][j] = pixel(input);   //store this as a pixel

            j += 1;
        }
        i += 1;
    }
 
}


void outputColor( ofstream &fout, image &picture )
{
    int i = 0;
    int j = 0;

    fout << picture.magicNumber << endl;            //output the header
    if( !picture.comment.empty() )
        fout << picture.comment << endl;
    fout << picture.cols << " " << picture.rows << endl;
    fout << "255" << '\n';


    while (i < picture.rows)
    {
        j = 0;
        while (j < picture.cols)        //write 8 bits to the binary file 
        {
            fout.write((char*)&picture.redGray[i][j], sizeof(pixel));
            fout.write((char*)&picture.green[i][j], sizeof(pixel));
            fout.write((char*)&picture.blue[i][j], sizeof(pixel));
            j += 1;
        }
        i += 1;
    }

    return;
}



void outputGrey(ofstream& fout, image& picture)
{
    int i = 0;
    int j = 0;

    fout << "P5" << endl;            //output the header
    if (!picture.comment.empty())
        fout << picture.comment << endl;
    fout << picture.cols << " " << picture.rows << endl;
    fout << "255" << '\n';


    while (i < picture.rows)
    {
        j = 0;
        while (j < picture.cols)        //write 8 bits to the binary file 
        {
            fout.write((char*)&picture.redGray[i][j], sizeof(pixel));
            j += 1;
        }
        i += 1;
    }

    return;
}