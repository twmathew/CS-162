/******************************************************
* Author: Thomas Mathew
* Assignment 3
* This is the Blue Men header file
* ***************************************************/

#ifndef BLUEMEN_H
#define BLUEMEN_H
#include "Creature.h"
#include <iostream>
using namespace std;

// Declare the Blue Men Class

class blueMen : public Creature
{


public:
	// Constructor
	blueMen();
	std::string getName();
	int initialStren();
	int Strengthfunc(int str);
	//Blue Men atk and def funcs
	int atkRoll();
	int defRoll();

};

#endif