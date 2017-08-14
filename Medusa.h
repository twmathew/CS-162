/******************************************************
* Author: Thomas Mathew
* Assignment 3
* This is the Medusa header file
* ***************************************************/

#ifndef MEDUSA_H
#define MEDUSA_H
#include "Creature.h"
#include <iostream>
using namespace std;

// Declare the Medusa Class

class Medusa : public Creature
{

public:
	// Constructor
	Medusa();
	std::string getName();
	int initialStren();
	int Strengthfunc(int str);
	//Medusa atk and def funcs
	int atkRoll();
	int defRoll();

};

#endif