#include <vector>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

#include "shuffle.h"

using namespace std;

void shuffleDeck()
{
    srand(time(nullptr));

    for (int i = 0; i < 52; i++){
        int tempRand = rand() % 52;
        string tempVal = aDeck[tempRand].value;
        string tempSuit = aDeck[tempRand].suit;
        aDeck[tempRand].value = aDeck[i].value;
        aDeck[tempRand].suit = aDeck[i].suit;
        aDeck[i].value = tempVal;
        aDeck[i].suit = tempSuit;
    }
    for (int i = 0; i < 52; i++){
        cout << aDeck[i].value << " of " << aDeck[i].suit << endl;
    }
}