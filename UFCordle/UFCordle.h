#include "fighterClass.h"
#include <string>
#include <iostream>
#include <iomanip>
#include <random>


using namespace std;

void compareFighters(fighter userGuess, fighter actual);
void checkWins(fighter userGuess, fighter actual);
void checkLosses(fighter userGuess, fighter actual);
void checkReach(fighter userGuess, fighter actual);
void checkStyle(fighter userGuess, fighter actual);
void checkWeight(fighter userGuess, fighter actual);
void checkNation(fighter userGuess, fighter actual);