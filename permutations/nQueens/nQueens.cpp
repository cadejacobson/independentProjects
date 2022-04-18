#include "nQueens.h"

int main()
{
    int sideLength = 15;
    int ** board = nullptr;
    int usedVert[15]= {0};
    int usedDiag1[15] = {0};
    int usedDiag2[15] = {0};
    int usedHor[15] = {0};


    cout << "Please enter the board's side length (max of 12)" << endl;
    cin >> sideLength;

    alloc2d( board, sideLength + 4 );



    delete2d( board, sideLength );

    return 0;
}



void nQueens(int** &board, int vert[], int diag1[], int diag2[], int hor[],
             int sideLength )
{




    return;
}



void alloc2d(int**& board, int n)
{
    int i;
    board = new (nothrow) int* [n];

    if (board == nullptr)
    {
        return;
    }

    for (i = 0; i < n; i += 1)
    {
        board[i] = new (nothrow) int[n];
        if (board[i] == nullptr)
        {
            delete2d(board, i);
            return;
        }
    }

    return;
}


void delete2d(int**& board, int n)
{
    int i;

    for (i = 0; i < n; i += 1)
        delete[] board[i];

    delete[] board;

    return;
}