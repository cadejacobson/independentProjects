#include "fighterClass.h"
#include <random>
#include <time.h>

fighter randomFighter()
{
    fighter guess;
    fighter McGregor = { "Conor McGregor", "Ireland", "Lightweight", 22, 6, "Lanky" };
    fighter Khabib = { "Khabib Nurmagomedov", "Russia", "Lightweight", 29, 0, "Wrestler" };
    fighter Nate = { "Nate Diaz", "USA", "Lightweight", 20, 13, "BJJ" };
    fighter Max = { "Max Holloway", "USA", "Featherweight", 23, 6, "Striker" };
    fighter Volk = { "Alexander Volkanovski", "Australia", "Featherweight", 24, 1, "Striker" };
    fighter Khamzat = { "Khamzat Chimaev", "Russia", "Welterweight", 11, 0, "Wrestler" };
    fighter Israel = { "Israel Adesanya", "Nigeria", "Middleweight", 22, 1, "Striker" };
    fighter Kamaru = { "Kamaru Usman", "Nigeria", "Welterweight", 20, 1, "Wrestler" };
    fighter Colby = { "Colby Covington", "USA", "Welterweight", 17, 3, "Wrestler" };
    fighter Francis = { "Francis Ngannou", "Cameroon", "Heavyweight", 17, 3, "Striker" };
    fighter Saint = { "Georges St. Pierre", "Canada", "Welterweight", 26, 2, "Wrestler" };
    fighter Jose = { "Jose Aldo", "Brazil", "Bantamweight", 31, 7, "Striker" };
    fighter Cejudo = { "Henry Cejudo", "USA", "Bantamweight", 16, 2, "Wrestler" };
    fighter Bones = { "Jon Jones", "USA", "Light Heavyweight", 26, 1, "Striker" };
    fighter Chuck = { "Chuck Liddell", "USA", "Light Heavyweight", 21, 8, "Striker" };

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
    fighter Canelo = {"Canelo", "Mexico", "Lightweight", 53, 1, "Boxer" };
    fighter McGregor = { "Conor McGregor", "Ireland", "Lightweight", 22, 6, "Lanky" };
    fighter Khabib = { "Khabib Nurmagomedov", "Russia", "Lightweight", 29, 0, "Wrestler" };
    fighter Nate = { "Nate Diaz", "USA", "Lightweight", 20, 13, "BJJ" };
    fighter Max = { "Max Holloway", "USA", "Featherweight", 23, 6, "Striker" };
    fighter Volk = { "Alexander Volkanovski", "Australia", "Featherweight", 24, 1, "Striker" };
    fighter Khamzat = { "Khamzat Chimaev", "Russia", "Welterweight", 11, 0, "Wrestler" };
    fighter Israel = { "Israel Adesanya", "Nigeria", "Middleweight", 22, 1, "Striker" };
    fighter Kamaru = { "Kamaru Usman", "Nigeria", "Welterweight", 20, 1, "Wrestler" };
    fighter Colby = { "Colby Covington", "USA", "Welterweight", 17, 3, "Wrestler" };
    fighter Francis = { "Francis Ngannou", "Cameroon", "Heavyweight", 17, 3, "Striker" };
    fighter Saint = { "Georges St. Pierre", "Canada", "Welterweight", 26, 2, "Wrestler" };
    fighter Jose = { "Jose Aldo", "Brazil", "Bantamweight", 31, 7, "Striker" };
    fighter Cejudo = { "Henry Cejudo", "USA", "Bantamweight", 16, 2, "Wrestler" };
    fighter Bones = { "Jon Jones", "USA", "Light Heavyweight", 26, 1, "Striker" };
    fighter Chuck = { "Chuck Liddell", "USA", "Light Heavyweight", 21, 8, "Striker" };

    fighter fighterTable[100] = { McGregor, Khabib, Nate, Max, Volk, Khamzat,
        Israel, Kamaru, Colby, Francis, Saint, Jose, Cejudo, Bones, Chuck };

    for( i = 0; i < 14; i++ )
    {
        if( fighterTable[i].name == guessedName )
            return fighterTable[i];
    }

    return Canelo;
}
