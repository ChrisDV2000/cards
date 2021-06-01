#include <vector>
#include <iostream>

#include "deck.h"

using namespace std;

int main()
{
    deck_card deck;
    char suit;
    char value;
    for(int i = 1; i <= 4; i++){
        for (int j = 1; j <= 13; j++){
            switch (i)
            {
            case 1:
                suit = 'H';
                break;
            case 2:
                suit = 'C';
                break;
            case 3:
                suit = 'D';
                break;
            case 4:
                suit = 'S';
                break;
            default:
                break;
            }
            switch (j)
            {
            case 1:
                value = 'A';
                break;
            case 2:
                value = '2';
                break;
            case 3:
                value = '3';
                break;
            case 4:
                value = '4';
                break;
            case 5:
                value = '5';
                break;
            case 6:
                value = '6';
                break;
            case 7:
                value = '7';
                break;
            case 8:
                value = '8';
                break;
            case 9:
                value = '9';
                break;
            case 10:
                value = '0';
                break;
            case 11:
                value = 'J';
                break;
            case 12:
                value = 'Q';
                break;
            case 13:
                value = 'K';
                break;
            default:
                break;
            }
            deck.suit = suit;
            deck.value = value;
            cout << value << " of " << suit << endl; 
        }
    }
    cout << endl << endl << deck.value << " of " << deck.suit << endl; 
    return 0;
}