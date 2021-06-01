#include <vector>
#include <iostream>
#include <string>

#include "deck.h"

using namespace std;

void populateDeck()
{ 
    string suit;
    string value;
    int a = 0;
    for(int i = 1; i <= 4; i++){
        for (int j = 1; j <= 13; j++){
            switch (i)
            {
            case 1:
                suit = "Hearts";
                break;
            case 2:
                suit = "Clubs";
                break;
            case 3:
                suit = "Diamonds";
                break;
            case 4:
                suit = "Spades";
                break;
            default:
                break;
            }
            switch (j)
            {
            case 1:
                value = "Ace";
                break;
            case 2:
                value = "2";
                break;
            case 3:
                value = "3";
                break;
            case 4:
                value = "4";
                break;
            case 5:
                value = "5";
                break;
            case 6:
                value = "6";
                break;
            case 7:
                value = "7";
                break;
            case 8:
                value = "8";
                break;
            case 9:
                value = "9";
                break;
            case 10:
                value = "10";
                break;
            case 11:
                value = "J";
                break;
            case 12:
                value = "Q";
                break;
            case 13:
                value = "K";
                break;
            default:
                break;
            }
            aDeck[a].value = value;
            aDeck[a].suit = suit;
            a++;
        }
        
    }
    for (int i = 0; i < 52; i++){
        cout << aDeck[i].value << " of " << aDeck[i].suit << endl;
    }
}