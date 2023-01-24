#pragma once
#include "Direction.h"
#include "string"

using namespace std;

// in this class have public member varibales and methods.
class Warrior {

public:
    string name;
    int chances;
    string prize;
    Warrior(string theName);
    void attack(Warrior& theWarrior);
    void takePrize(Direction* room);
    void displayPrize();
};

Warrior::Warrior(string theName) {
    name = theName;
    chances = 10;
    prize = "";
}
// whenever the warrior attacks, got less chances to win the prize.
// here the statment will do the work of the chances.
void Warrior::attack(Warrior& theWarrior) {
    cout << name << " attacks " << theWarrior.name << endl;
    theWarrior.chances--;
}
// this method will check condition of the game
void Warrior::displayPrize() {
    if (prize != "") {
        cout << name << " has " << prize << endl;
    }
    else {
        cout << name << " does not have any prize" << endl;
    }
}
// direction for the prize
void Warrior::takePrize(Direction* room) {
    prize = room->prize;
    room->prize = "";
}