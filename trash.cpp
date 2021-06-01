#include <vector>
#include <iostream>
#include <iomanip>
#include "shuffle.h"
#include "trash.h"

using namespace std;

int main()
{
    cout << "Welcome" << endl;

    populateDeck();
    shuffleDeck();

    return 0;
}