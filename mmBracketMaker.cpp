#include <iostream>
#include <cmath>
#include <random>


using namespace std;


int main()
{
    int i;
    int seed1, seed2;
    int seedDif;
    double value;

    default_random_engine generator(time(nullptr));
    uniform_real_distribution<double> distribution( 0, 16 );

    cout << "Please enter the first seed: " << endl;
    cin >> seed1;
    cout << "Please enter the second seed: " << endl;
    cin >> seed2;

    seedDif = abs(seed1 - seed2);         //calculates the difference between 
                                            //the two seeds
    value = distribution(generator);

    if( value < seedDif )
        cout << "Choose the favorite" << endl;
    else
        cout << "Choose the underdog" << endl;


    return 0;
}