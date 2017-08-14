/********************************************************
* Author: Thomas Mathew
* Final Project
* This is the Casino Zone implementation file
* *****************************************************/

#include "Casino.h"
#include <iostream>
using namespace std;

// Constructor
Casino::Casino()
{
	zoneName = "Casino Zone";
}

void Casino::Welcome()
{
	cout << "Welcome to the Casino Zone!" << "\n" << "Get ready to gamble - this zone is all about chance!" << "\n" << endl;
}

int Casino::routeRun()
{
	int choice;
	//"Checker" just causes the while loop to loop continuosly. It's just to catch bad input.
	int checker = 0;


	while (checker == 0)
	{
		cout << "Which path will Sonic choose?" << "\n" << "1. Play sonic pinball! (Sonic is the ball)." << "\n" << "2. Use a booster to the top side of the stage." << "\n";
		cout << "3. Try to rush through the stage." << endl;
		cin >> choice;
		if ((choice != 1) && (choice != 2) && (choice != 3))
		{
			cout << "Invalid input! You didn't enter 1, 2, or 3." << endl;
		}

		if (choice == 1)
		{
			int pinball = (rand() % 3);
			if (pinball == 0)
			{
				cout << "Sonic fell into the drain and hit the spikes, taking damage." << "\n" << endl;
				return 3;
			}
			if (pinball == 1)
			{
				cout << "Sonic ricocheted off a bumper and was shot out from the pinball machine." << "\n" << endl;
				return 0;
			}
			if (pinball == 2)
			{
				cout << "Sonic hit a skillshot: JACKPOT!!! Sonic got the Gold Emerald!" << "\n" << endl;
				return 6;
			}

		}
		if (choice == 2)
		{
			cout << "Sonic collected some rings, but didn't find an emerald." << "\n" << endl;
			return 1;
		}
		if (choice == 3)
		{
			cout << "Sonic defeated some enemies, but didn't find any rings or emeralds." << "\n" << endl;
			return 0;
		}
	}
}

int Casino::Special()
{
	cout << "When Sonic enters the Casino, first stop is the slot machine!" << endl;

	{
		// Get a pseudo-random number from 0 to 3
		int slots = (rand() % 4);
		if (slots == 0)
		{
			cout << "3 different symbols. No luck this time!" << "\n" << endl;
			return 0;
		}
		if (slots == 1)
		{
			cout << "3 Robotnik symbols. Sonic took damage!" << "\n" << endl;
			return 3;
		}
		if (slots == 2)
		{
			cout << "3 Ring Symbols! Sonic got some rings!" << "\n" << endl;
			return 1;
		}
		if (slots == 3)
		{
			cout << "3 Sonic symbols! Sonic got one extra Life!" << "\n" << endl;
			return 2;
		}
	}
}

