#include "UFCordle.h"


int main()
{
    int i = 0;
    fighter warrior;
    string fighterGuess = "";
    bool correct = false;
    warrior = randomFighter();

    cout << warrior.name << endl;

    while (i < 6 && correct == false)
    {
        if( i != 0 )
            cout << "Sorry, that is incorrect. Please try again." << endl;
        else
            cout << "Please enter your first guess: " << endl;
        getline(cin, fighterGuess);
        if (fighterGuess == warrior.name)
            correct = true;
        i++;
    }


    if( correct == false )
    {
        cout << "Sorry, the correct fighter was: " << warrior.name << endl;
        return -1;
    }

    else
    {
        cout << "Congratulations! You guessed it correctly in " << i;
        cout << " attempts." << endl;
        return 69;
    }

    return 0;
}





int checkWins( fighter userGuess, fighter actual )
{
    if( userGuess.wins < actual.wins )
        cout << "Lower";
    else if( userGuess.wins > actual.wins )
        cout << "Higher";
    else
        cout << "Correct";
        
}