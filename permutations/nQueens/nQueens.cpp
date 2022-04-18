#include "nQueens.h"

int main()
{
    int sideLength;
    int ** board = nullptr;


    cout << "Please enter the board's side length" << endl;
    cin >> sideLength;

    alloc2d( board, sideLength );



    delete2d( board, sideLength );

    return 0;
}



void nQueens(int** &board)
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