#ifndef _DECK_H_
#define _DECK_H_

#include <vector>
#include <string>

using namespace std;

struct card
{
    string suit;
    string value;
}aDeck[52];

void populateDeck();

#endif