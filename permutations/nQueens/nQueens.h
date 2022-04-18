#include <string>
#include <iostream>


using namespace std;

void nQueens(int**& board, int vert[], int diag1[], int diag2[], int hor[],
             int sideLength);

void delete2d(int**& board, int n);

void alloc2d(int**& board, int n);