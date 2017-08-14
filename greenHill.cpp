/********************************************************
* Author: Thomas Mathew
* Final Project
* This is the Green Hill Zone implementation file
* *****************************************************/

#include "greenHill.h"
#include <iostream>
using namespace std;

// Constructor
greenHill::greenHill()
{
	zoneName = "Green Hill Zone";
}

void greenHill::Welcome()
{
	cout << "Welcome to the Green Hill Zone!" << "\n" 
		<< "Since Sonic is familiar with this zone, he will have enough time" << "\n" << "to search the zone twice if need be." << "\n" << endl;
}

int greenHill::routeRun()
{
	int choice;
	//"Checker" just causes the while loop to loop continuosly. It's just to catch bad input.
	int checker = 0;

	while (checker == 0)
	{
		cout << "Which path will Sonic choose?" << "\n" << "1. Jump across the moving platforms." << "\n" << "2. Dash across the bridges." << "\n";
		cout << "3. Jump past the spike obstacles." << endl;
		cin >> choice;
		if ((choice != 1) && (choice != 2) && (choice != 3))
		{
			cout << "Invalid input! You didn't enter 1, 2, or 3." << endl;
		}

		if (choice == 1)
		{
			cout << "Sonic hopped across the platforms and found some rings, but no emerald." << "\n" << endl;
			return 1;
		}
		if (choice == 2)
		{
			cout << "On the bridge, Sonic found the Green Chaos Emerald!" << "\n" << endl;
			return 4;
		}
		if (choice == 3)
		{
			cout << "Sonic narrowly jumped over the spikes, but didn't find an emerald." << "\n" << endl;
			return 0;
		}
	}
}

int greenHill::Special()
{
	cout << "Since this is Green Hill Zone, you get an extra try to find the emerald!" << endl;
	return 0;
}

