/********************************************************
* Author: Thomas Mathew
* Final Project
* This is the Lava Zone implementation file
* *****************************************************/

#include "Lava.h"
#include <iostream>
using namespace std;

// Constructor
Lava::Lava()
{
	zoneName = "Lava Zone";
}

void Lava::Welcome()
{
	cout << "Welcome to the Lava Zone!" << "\n" 	<< "The Lava Zone is dangerous! With hot lava everywhere," 
		<< "\n" << "there is always a chance Sonic mis-steps and takes damage." << "\n" << endl;
}

int Lava::routeRun()
{
	int choice;
	//"Checker" just causes the while loop to loop continuosly. It's just to catch bad input.
	int checker = 0;


	while (checker == 0)
	{
		cout << "Which path will Sonic choose?" << "\n" << "1. Use a spring to jump over the Lava Lake." << "\n" << "2. Use the underground passage." << "\n";
		cout << "3. Run through the Obsidian Quarry." << endl;
		cin >> choice;
		if ((choice != 1) && (choice != 2) && (choice != 3))
		{
			cout << "Invalid input! You didn't enter 1, 2, or 3." << endl;
		}

		if (choice == 1)
		{
			cout << "Sonic found the Crimson Emerald on the other side of the Lake!" << "\n" << endl;
			return 8;
		}

		if (choice == 2)
		{
			cout << "Sonic found nothing but enemies in the passage, but defeated them unharmed." << "\n" << endl;
			return 0;
		}
		if (choice == 3)
		{
			cout << "Sonic slipped on the smooth surface and took damage." << "\n" << endl;
			return 3;
		}
	}
}

int Lava::Special()
{
	int lava = (rand() % 2);
	if (lava == 0)
	{
		cout << "Sonic fell into the lava and took damage." << "\n" << endl;
		return 3;
	}
	return 0;
}

