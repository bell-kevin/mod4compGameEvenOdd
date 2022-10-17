#pragma once

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class Dice
{
private:
	int die1, die2, total;
public:
	Dice();
	void roll();
	int getTotal();
}; // end class Dice

// Constructor
Dice::Dice()
{
	die1 = 0;
	die2 = 0;
	total = 0;
} // end Dice constructor

// roll function
void Dice::roll()
{
	// Get the system time.
	unsigned seed = time(0);

	// Seed the random number generator.
	srand(seed);

	// Get random values for the dice.
	die1 = (rand() % 6) + 1;
	die2 = (rand() % 6) + 1;

	// Calculate the total.
	total = die1 + die2;
} // end roll function

// getTotal function
int Dice::getTotal()
{
	return total;
} // end of Dice class
