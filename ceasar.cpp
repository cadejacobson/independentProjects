#include <string>
#include <cctype>
#include <iostream>


using namespace std;

int main()
{
    int i;
    int shiftAmt = 0;
    bool lowered = false;
    char tempLower = '0';
    int newCharVal = 0;
    string phrase = "";

    cout << "Please enter the phrase you would like to encrypt: " << endl;

    cin >> phrase;

    cout << "Please enter the amount of shifts you would like to apply: "
        << endl;

    cin >> shiftAmt;                

    shiftAmt = shiftAmt % 26;                   //allows for any multiple of 26


    if( phrase.empty() )              //checks to ensure there is data inputted
        return 0;

    for( i = 0; i < phrase.size(); i += 1 )
    {
        lowered = false;
        if( isalpha( phrase[i] ) && phrase[i] - 97 < 0 )
        {
            tempLower = tolower(phrase[i]);
            lowered = true;
        }
        else if( isalpha( phrase[i]) )        
        {
            tempLower = phrase[i];
        }


        newCharVal = tempLower + shiftAmt;


        if( newCharVal > 122 )
            newCharVal = newCharVal - 26;               //fixes going above 'z'   


        if (newCharVal < 97)
            newCharVal = newCharVal + 26;               //fixes going below 'a'  


        if( lowered == true )
            phrase[i] = toupper( newCharVal );
        else
            phrase[i] = newCharVal;
    }

    cout << "Your encrypted phrase is: " << phrase << endl;

    return 1;
}


