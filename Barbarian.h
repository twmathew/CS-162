/******************************************************
* Author: Thomas Mathew
* Assignment 3
* This is the Barbarian header file
* ***************************************************/

#ifndef BARBARIAN_H
#define BARBARIAN_H
#include "Creature.h"
#include <iostream>
using namespace std;

// Declare the Barbarian Class

class Barbarian : public Creature
{


public:
	// Constructor
	Barbarian();
	std::string getName();
	int initialStren();
	int Strengthfunc(int str);
	//Barbarian atk and def funcs
	int atkRoll();
	int defRoll();

};

#endif