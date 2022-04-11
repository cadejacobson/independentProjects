#include "nQueens.h"



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
