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


    permute( arr, used, n, k, count);

    return 0;
}




void permute( int arr[], int used[], int n, int k, int count )
{
    int i;

    if( count == k )
    {
        for( i = 0; i < k; i += 1 )
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        return;
    }

    for( i = 0; i < n; i += 1)
    {
        arr[count] = i;
        used[i] = 1;
        permute(arr, used, n, k, count + 1);
        used[i] = 0;
    }
    return;
}