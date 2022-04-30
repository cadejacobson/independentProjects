#include <string>

using namespace std;

enum weights {
    Flyweight, Bantamweight, Featherweight, Lightweight,
    Welterweight, Middleweight, LightHeavyweight, Heavyweight
};

struct fighter
{
    string name;
    string country;
    weights weight;
    int wins;
    int losses;
    string style;
    int reach;
};


fighter randomFighter();
fighter fighterLookup( string guessedName);