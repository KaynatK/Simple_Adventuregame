#pragma once
#include "Warrior.h"
#include <iostream>
using namespace std;

// The main function contains warrior name of the teams.
int main() {
	Warrior knight("Clan");
	Warrior Thug("Goon");

	// this statement charaters attacks each other.
	cout << Thug.name << " has " << Thug.chances << " chances " << endl;
	knight.attack(Thug);
	cout << Thug.name << " has " << Thug.chances << " chances " << endl;

	// the library contains the prize and display the winner.
	Direction* library;

	library = new Direction("The library", "a golden Knife");

	library->displayPrize();

	knight.displayPrize();

	knight.takePrize(library);

	library->displayPrize();

	knight.displayPrize();
}
