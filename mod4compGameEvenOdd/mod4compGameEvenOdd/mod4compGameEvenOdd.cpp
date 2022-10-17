// mod4compGameEvenOdd.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Dice.h"
using namespace std;

struct Player
{
    string firstName = {}, lastName = {};
    int wins = {}, losses = {};
};

// Function prototypes
string winOrLoss(string prediction, int total);
Player player;
int main()
{
    cout << "Module 4 Competency Project by Kevin Bell\n\n";
	cout << "What is your first name? ";
	cin >> player.firstName;
	cout << "What is your last name? ";
	cin >> player.lastName;
	cout << endl;
	

	// Create a Dice object
	Dice dice;

	// Create a variable to hold the total of the dice
	int total;

	// Create a variable to hold the user's prediction
	string prediction;

	// Create a variable to hold the user's response to playing again
	char again;

	// Create a do-while loop to play the game
	do
	{
		// Roll the dice
		dice.roll();

		// Get the total of the dice
		total = dice.getTotal();

		// Get the user's prediction
		cout << "Will the next roll be even or odd? ";
		cin >> prediction;

		// Display the result
		cout << "Rolled " << total << endl;
		cout << winOrLoss(prediction, total) << endl;

		// Ask the user if they want to play again
		cout << "Do you want to play again? (y/n) ";
		cin >> again;
		cout << endl;
	} while (again == 'y' || again == 'Y');
	cout << "Wins: " << player.wins << endl;
	cout << "Losses: " << player.losses << endl;
	cout << "Thanks for playing, " << player.firstName << " " << player.lastName << "!\n";
	system("pause");
	return 0;
} // end main

string winOrLoss(string prediction, int total)
{
	if (prediction == "e" && total % 2 == 0)
	{
		player.wins++;
		return "You are correct!";
	}
	else if (prediction == "o" && total % 2 != 0)
	{
		player.wins++;
		return "You are correct!";
	}
	else
	{
		player.losses++;
		return "Your prediction was bad";
	} // end if
} // end winOrLoss function