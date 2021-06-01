#include <vector>
#include <iostream>

#include "shuffle.h"

using namespace std;

void deck_init(vector<vector<int>> *deck)
{
    for (int j = 0; j <= 3; j++){
        vector<int> temp;
        temp.clear();
        for (int i = 1; i <= 13; i++){
            temp.push_back(i);
        }  
        *deck.push_back(temp);
    } 

    for (vector<int> v:*deck){
        cout << endl;
        for (int i:v){
            cout << i << endl;
        }
    }
}