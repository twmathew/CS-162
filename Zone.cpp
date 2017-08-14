/********************************************************
* Author: Thomas Mathew
* Final Project
* This is the Zone implementation file (base class)
* *****************************************************/

#include "Zone.h"
#include <iostream>
using namespace std;

// No Constructor

//These functions contain nothing meaningful. There are purely here as virtual functions for the Child classes.

void Zone::Welcome()
{

}

int Zone::Special()
{
	return 0;
}

int Zone::routeRun()
{
	return 0;
}

string Zone::getName()
{
	return zoneName;
}

void Zone::exitZone()
{
	//This function demonstrates the linkage of the Zones, and asks the player where to go next.
	cout << "Now exiting the Zone. Sonic can now go to these zones: " << endl;
	//Iterate through and print all the pointers of a given objects. Check to make sure the memory exists.
	for (int i = 0; i < 4; i++)
	{
		if ((ptrArray[i]) == NULL)
		{
			return;
		}
		if (((*ptrArray[i]).getName()) == "Green Hill Zone")
		{
			cout << "1. ";
		}
		if (((*ptrArray[i]).getName()) == "Bonus Zone")
		{
			cout << "2. ";
		}
		if (((*ptrArray[i]).getName()) == "Aqua Zone")
		{
			cout << "3. ";
		}
		if (((*ptrArray[i]).getName()) == "Casino Zone")
		{
			cout << "4. ";
		}
		if (((*ptrArray[i]).getName()) == "Lava Zone")
		{
			cout << "5. ";
		}
			cout << ((*ptrArray[i]).getName()) << "\n";
	}
}

