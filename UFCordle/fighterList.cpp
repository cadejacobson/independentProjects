#include "fighterClass.h"
#include <random>
#include <time.h>

fighter randomFighter()
{
    fighter guess;
    fighter Canelo = { "Canelo", "Mexico", "Lightweight", 53, 1, "Boxer", 70 };
    fighter McGregor = { "Conor McGregor", "Ireland", "Lightweight", 22, 6, "Striker", 74 };
    fighter Khabib = { "Khabib Nurmagomedov", "Russia", "Lightweight", 29, 0, "Wrestler", 70 };
    fighter Nate = { "Nate Diaz", "USA", "Lightweight", 20, 13, "BJJ", 76 };
    fighter Max = { "Max Holloway", "USA", "Featherweight", 23, 6, "Striker", 69 };
    fighter Volk = { "Alexander Volkanovski", "Australia", "Featherweight", 24, 1, "Striker", 71 };
    fighter Khamzat = { "Khamzat Chimaev", "Russia", "Welterweight", 11, 0, "Wrestler", 75 };
    fighter Israel = { "Israel Adesanya", "Nigeria", "Middleweight", 22, 1, "Striker", 80 };
    fighter Kamaru = { "Kamaru Usman", "Nigeria", "Welterweight", 20, 1, "Wrestler", 76 };
    fighter Colby = { "Colby Covington", "USA", "Welterweight", 17, 3, "Wrestler", 72 };
    fighter Francis = { "Francis Ngannou", "Cameroon", "Heavyweight", 17, 3, "Striker", 83 };
    fighter Saint = { "Georges St. Pierre", "Canada", "Welterweight", 26, 2, "Wrestler", 76 };
    fighter Jose = { "Jose Aldo", "Brazil", "Bantamweight", 31, 7, "Striker", 70 };
    fighter Cejudo = { "Henry Cejudo", "USA", "Bantamweight", 16, 2, "Wrestler", 64 };
    fighter Bones = { "Jon Jones", "USA", "Light Heavyweight", 26, 1, "Striker", 84 };
    fighter Chuck = { "Chuck Liddell", "USA", "Light Heavyweight", 21, 8, "Striker", 76 };

    fighter fighterTable[100] = { McGregor, Khabib, Nate, Max, Volk, Khamzat,
        Israel, Kamaru, Colby, Francis, Saint, Jose, Cejudo, Bones, Chuck };


    default_random_engine generator( int(time(nullptr) ) );
    uniform_int_distribution<int> distribution( 0, 14 );


    guess = fighterTable[ distribution(generator) ];

    return guess;
}



fighter fighterLookup( string guessedName )
{
    int i;
    fighter Canelo = {"Canelo", "Mexico", "Lightweight", 53, 1, "Boxer", 70 };
    fighter McGregor = { "Conor McGregor", "Ireland", "Lightweight", 22, 6, "Striker", 74 };
    fighter Khabib = { "Khabib Nurmagomedov", "Russia", "Lightweight", 29, 0, "Wrestler", 70 };
    fighter Nate = { "Nate Diaz", "USA", "Lightweight", 20, 13, "BJJ", 76 };
    fighter Max = { "Max Holloway", "USA", "Featherweight", 23, 6, "Striker", 69 };
    fighter Volk = { "Alexander Volkanovski", "Australia", "Featherweight", 24, 1, "Striker", 71 };
    fighter Khamzat = { "Khamzat Chimaev", "Russia", "Welterweight", 11, 0, "Wrestler", 75 };
    fighter Israel = { "Israel Adesanya", "Nigeria", "Middleweight", 22, 1, "Striker", 80 };
    fighter Kamaru = { "Kamaru Usman", "Nigeria", "Welterweight", 20, 1, "Wrestler", 76 };
    fighter Colby = { "Colby Covington", "USA", "Welterweight", 17, 3, "Wrestler", 72 };
    fighter Francis = { "Francis Ngannou", "Cameroon", "Heavyweight", 17, 3, "Striker", 83 };
    fighter Saint = { "Georges St. Pierre", "Canada", "Welterweight", 26, 2, "Wrestler", 76 };
    fighter Jose = { "Jose Aldo", "Brazil", "Bantamweight", 31, 7, "Striker", 70 };
    fighter Cejudo = { "Henry Cejudo", "USA", "Bantamweight", 16, 2, "Wrestler", 64 };
    fighter Bones = { "Jon Jones", "USA", "Light Heavyweight", 26, 1, "Striker", 84 };
    fighter Chuck = { "Chuck Liddell", "USA", "Light Heavyweight", 21, 8, "Striker", 76 };

    fighter fighterTable[100] = { McGregor, Khabib, Nate, Max, Volk, Khamzat,
        Israel, Kamaru, Colby, Francis, Saint, Jose, Cejudo, Bones, Chuck };

    for( i = 0; i < 14; i++ )
    {
        if( fighterTable[i].name == guessedName )
            return fighterTable[i];
    }

    return Canelo;
}