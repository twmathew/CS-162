/********************************************************
* Author: Thomas Mathew
* Final Project
* This is the Bonus Zone implementation file
* *****************************************************/

#include "bonusZone.h"
#include <iostream>
using namespace std;

// Constructor
bonusZone::bonusZone()
{
	zoneName = "Bonus Zone";
}

void bonusZone::Welcome()
{
	cout << "Welcome to the Bonus Zone!" << endl;
}

int bonusZone::Special()
{
	cout << "Since it is a bonus zone, Sonic can't take damage on this stage." << "\n" << endl;
	return 0;
}

int bonusZone::routeRun()
{
	int choice;
	//"Checker" just causes the while loop to loop continuosly. It's just to catch bad input.
	int checker = 0;


	while (checker == 0)
	{
		cout << "Which path will Sonic choose?" << "\n" << "1. Attack the flying Robots." << "\n" << "2. Ignore the enemies and try to find the emerald." << "\n";
		cout << "3. Try to break through the Crystal Barrier." << endl;
		cin >> choice;
		if ((choice != 1) && (choice != 2) && (choice != 3))
		{
			cout << "Invalid input! You didn't enter 1, 2, or 3." << endl;
		}

		if (choice == 1)
		{
			cout << "Sonic found the Purple Emerald inside one of the Robots!" << "\n" << endl;
			return 5;
		}
		if (choice == 2)
		{
			cout << "Sonic got hit by a laser beam." << "\n" << "But, it's only a Bonus Zone so he didn't take damage. No Emerald was found." << "\n" << endl;
			return 0;
		}
		if (choice == 3)
		{
			cout << "Sonic broke through the barrier, but it gave way to the end of the special stage."
				<< "\n" << "The Bonus ends without finding an Emerald." << "\n" << endl;
			return 0;
		}
	}
}


