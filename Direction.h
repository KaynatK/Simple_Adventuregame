#pragma once

// apating my tutor to make this code and improvised in my own code.
#include "string"
#include <iostream>
using namespace std;

// This class called direction and has two public variables, both are strings.
// Class has constructor which takes two arguments.
class Direction {
public:
    string name;
    string prize;
    Direction(string theName, string thePrize);
    void displayPrize();
};
// Has function
Direction::Direction(string theName, string thePrize) {
    name = theName;
    prize = thePrize;
}
// Two statement which printed two statement which contains empty variable.
void Direction::displayPrize() {
    if (prize != "") {
        cout << name << " contains " << prize << endl;
    }
    else {
        cout << name << " does not have any prize" << endl;
    }
}

