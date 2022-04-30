#include "UFCordle.h"


int main()
{
    int i = 0;
    fighter warrior, userGuess;
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

        getline( cin, fighterGuess );

        userGuess = fighterLookup( fighterGuess );
        while( userGuess.name == "Canelo" )
        {
            cout << "Sorry, that fighter is not yet supported in our database.";
            cout << " Please enter another. " << endl;
            getline( cin, fighterGuess );
            userGuess = fighterLookup(fighterGuess);
        }

        compareFighters( userGuess, warrior );

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







void compareFighters( fighter userGuess, fighter actual )
{
    if (userGuess.name == actual.name )
        return;
    

    cout << setw(15) << "Weight" <<setw(15) << "Wins" << setw(15) << "Losses" 
        << setw(15) <<  "Reach";
    cout << setw(15) << "Style" << endl;

    checkWeight( userGuess, actual );

    checkWins(userGuess, actual);

    checkLosses( userGuess, actual );

    checkReach( userGuess, actual );

    checkStyle( userGuess, actual );

    cout << endl;
    return;
}




void checkWins( fighter userGuess, fighter actual )
{
    if( userGuess.wins < actual.wins )
        cout << setw(15) << "Too Low";
    else if( userGuess.wins > actual.wins )
        cout << setw(15) << "Too High";
    else
        cout << setw(15) << "Correct";
    
    return;
}



void checkLosses(fighter userGuess, fighter actual)
{
    if (userGuess.losses < actual.losses)
        cout << setw(15) << "Too Low";
    else if (userGuess.losses > actual.losses)
        cout << setw(15) << "Too High";
    else
        cout << setw(15) << "Correct";

    return;
}



void checkReach( fighter userGuess, fighter actual )
{
    if (userGuess.reach < actual.reach)
        cout << setw(15) << "Too Short";
    else if (userGuess.reach > actual.reach)
        cout << setw(15) << "Too Long";
    else
        cout << setw(15) << "Correct";

    return;

}


void checkStyle(fighter userGuess, fighter actual)
{
    if( userGuess.style == actual.style)
        cout << setw(15) << "Match";
    else
        cout << setw(15) << "Incorrect";

    return;
}


void checkWeight( fighter userGuess, fighter actual )
{
    if( userGuess.weight < actual.weight )
        cout << setw(15) << "Too Light";
    else
        cout << setw(15) << "Too Heavy";


    return;
}