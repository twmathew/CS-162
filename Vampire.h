/******************************************************
* Author: Thomas Mathew
* Assignment 3
* This is the Vampire header file
* ***************************************************/

#ifndef VAMPIRE_H
#define VAMPIRE_H
#include "Creature.h"
#include <iostream>
using namespace std;

// Declare the Vampire Class

class Vampire : public Creature
{

public:
	// Constructor
	Vampire();
	std::string getName();
	int initialStren();
	int Strengthfunc(int str);
	//Vampire atk and def funcs
	int atkRoll();
	int defRoll();

};

#endif