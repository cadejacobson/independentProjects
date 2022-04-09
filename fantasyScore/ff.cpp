#include "ff.h"

double rushPoints(double rushYards)
{
    double points = 0;
    points = rushYards / 10;
    
    return points;
}


int tdPoints(int tdCount)
{
    int points;
    points = 6 * tdCount;
    
    return points;
}


double recPoints(double recYards)
{
    double points;
    points = recYards / 10;
    
    return points;
}


int pprRec(int recCount)
{
    int points;
    points = recCount;
    return points;

}

string winningPlayer(string playerNames[], int fantasyPts[], int size)
{
    string winner;
    int i;
    int highest = 0;
    int currentIdx;
    int winningIdx = 0;
    
    for(i = 0; i < size; i += 1)
    {
        currentIdx = fantasyPts[i];
        if(highest < currentIdx)
        {
            highest = currentIdx;
            winningIdx = i;
        }
    }
    winner = playerNames[winningIdx];
    return winner;
}
