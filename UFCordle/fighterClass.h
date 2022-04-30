#include <string>

using namespace std;

struct fighter
{
    string name;
    string country;
    string weight;
    int wins;
    int losses;
    string style;
    int reach;
};


fighter randomFighter();
fighter fighterLookup( string guessedName);