#include "nChooseK.h"

int main()
{
    int n, k;
    int count = 0;
    int arr[15] = {0};
    int used[15] = {0};

    cout << "Please enter the N choose K amount of permutations. Please enter";
    cout << " two integers: " << endl;

    cin >> n >> k;

    cout << "Those that match a specific base case are here: " << endl;
    permB( arr, used, n, k, count);

    cout << "All permutations are below" << endl;
    permute( arr, used, n, k, count);

    return 0;
}




void permute( int arr[], int used[], int n, int k, int count )
{
    int i;

    if( count == k )
    {
        for( i = 0; i < k; i += 1 )                 //output every combination
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        return;
    }

    for( i = 0; i < n; i += 1)
    {
        arr[count] = i;
        used[i] = 1;                                //call recursively
        permute(arr, used, n, k, count + 1);
        used[i] = 0;
    }
    return;
}



void permB( int arr[], int used[], int n, int k, int count )
{
    int i;                                      //only outputs a permutation
    bool changeMade = false;                   //that fits a specific base case

    if( count == k )
    {
        changeMade = false;
        for( i = 0; i < k; i += 1 )
        {
            if( arr[3] == 3 || arr[2] == 1 )        //3 in the 4th position
            {                                       // and 1 in the 3rd
                cout << arr[i] << " ";
                changeMade = true;
            }
        }
        if( changeMade == true )
            cout << endl;
        return;
    }

    for( i = 0; i < n; i += 1)
    {
        arr[count] = i;                             //call recursively
        used[i] = 1;
        permB( arr, used, n, k, count + 1);
        used[i] = 0;
    }
    return;
}
