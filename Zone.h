/******************************************************
* Author: Thomas Mathew
* Final Project
* This is the Zone header file (base class)
* ***************************************************/

#ifndef ZONE_H
#define ZONE_H
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

// Declare the base Zone Class

class Zone
{

public:
	//Arary of Pointers. These will be inherited by the five zones
	Zone* ptrArray[4];

	//Name of the given Zone
	string zoneName;

	string getName();

	// No Constructor since we will never instantiate Zone

	//Pure Virtual functions
	virtual void Welcome()=0;
	virtual int Special()=0;
	virtual int routeRun() = 0;

	//Virtual Function
	virtual void exitZone();

};

#endif
