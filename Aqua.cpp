/********************************************************
* Author: Thomas Mathew
* Final Project
* This is the Aqua Zone implementation file
* *****************************************************/

#include "Aqua.h"
#include <iostream>
using namespace std;

// Constructor
Aqua::Aqua()
{
	zoneName = "Aqua Zone";
}

void Aqua::Welcome()
{
	cout << "Welcome to the Aqua Zone!" << "\n" << "Sonic will do his best to hold his breath."
		<< "\n" << "But he might need to come up for air and be unable to finish the stage." << "\n" << endl;
}

int Aqua::routeRun()
{
	int choice;
	//"Checker" just causes the while loop to loop continuosly. It's just to catch bad input.
	int checker = 0;


	while (checker == 0)
	{
		cout << "Which path will Sonic choose?" << "\n" << "1. Try to use super-speed and skim across the water's surface." << "\n";
		cout << "2. Head into the sunken temple." << "\n" << "3. Try and cross the open ocean floor" << endl;
		cin >> choice;
		if ((choice != 1) && (choice != 2) && (choice != 3))
		{
			cout << "Invalid input! You didn't enter 1, 2, or 3." << endl;
		}

		if (choice == 1)
		{
			cout << "Sonic wasn't fast enough and fell below the surface. He took damage from the fall." << "\n" << endl;
			return 3;
		}
		if (choice == 2)
		{
			cout << "Sonic found some rings in the sunken temple, but no Emerald." << "\n" << endl;
			return 1;
		}
		if (choice == 3)
		{
			cout << "Buried in the sand, Sonic found the Blue Emerald!" << "\n" << endl;
			return 7;
		}
	}
}

int Aqua::Special()
{
	int air = (rand() % 2);
	if (air == 0)
	{
		cout << "Sonic had to come up for air!" << "\n" << "Sonic will exit the Zone to catch his breath." << "\n" << endl;
		return 1;
	}
	return 0;
}

