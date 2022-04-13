#include <string>
#include <iostream>

using namespace std;


void permuteString( string data[], string unchanged[], int used[], int n, int k, int count );

int main()
{
    string data[10] = {"Meatball", "Marinara", "Jumping", "Steal", "Twist", "Jordan", "McQuistan", "Ps5", "Sore", "Mike"};
    string unchanged[10] = { "Meatball", "Marinara", "Jumping", "Steal", "Twist", "Jordan", "McQuistan", "Ps5", "Sore", "Mike" };
    int used[10] ={};
    int n = 6;
    int k = 5;
    int count = 0;

    permuteString( data, unchanged, used, n, k, count);

    return 0;
}



void permuteString(string data[], string unchanged[], int used[], int n, int k, int count)
{
    int i;
    if( count == k )
    {
        for( i = 0; i < k; i += 1 )
        {
            cout << data[i] << " ";
        }
        cout << endl;
        return;
    }

    for( i = 0; i < n; i += 1 )
    {
        if(used[i] == 0)
        {
            used[i] = 1;
            data[count] = unchanged[i];
            permuteString(data, unchanged, used, n, k, count + 1);
            used[i] = 0;
        }
    }
    
    return;
}
