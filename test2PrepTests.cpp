#include "test2Prep.h"

void bubbleSort(double array[], int size, char order)
{
    int i, j;
    double temp;
    
    for(j = 0; j < size - 1; j += 1)
    {
        for(i = 0; i < size - 1; i += 1)
        {
            if(array[i] > array[i + 1])
            {
                swap(array[i], array[i + 1]);
            
            }
        }
    }
}

void selectionSort(double array[], int size)
{
    int i, j;
    int minIndex = 0;
    
    for(j = 0; j < size - 1; j += 1)
    {
        minIndex = j;
        for(i = 0; i < size; i += 1)
        {
            if(array[i] < array[minIndex])
            {
                swap(array[i], array[minIndex]);
                minIndex = i;
            }
        
        }
    }   
}

void blindSort(double array[], int size)
{
    int i, j;
    int minIndex;
    
    for(j = 0; j < size - 1; j += 1)
    {
        minIndex = j;
        for(i = 0; i < size; i += 1)
        {
            if(array[i] < array[minIndex])
            {
               swap(array[i], array[minIndex]);
               minIndex = i; 
                
            }
        }
    }
}


void bubSort(double array[], int size)
{
    int i, j;
    for(j = 0; j < size - 1; j += 1)
    {
        for(i = 0; i < size - 1; i += 1)
        {
            if(array[i + 1] < array[i])
            {
                swap(array[i], array[i + 1]);
            }
            
        }   
    }
}


int binSearch(int array[], int size, int value)
{
    int high = size - 1;
    int low = 0;
    int mid;
    
    while(low <= high)
    {
        mid = (high + low) / 2;
       
        if(array[mid] == value)
            return mid;
        else if(array[mid] < value)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return mid;
}