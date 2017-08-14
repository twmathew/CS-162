/******************************************************
* Author: Thomas Mathew
* Assignment 3
* This is the Harry Potter header file
* ***************************************************/

#ifndef HARRYPOTTER_H
#define HARRYPOTTER_H
#include "Creature.h"
#include <iostream>
using namespace std;

// Declare the Harry Potter Class

class harryPotter : public Creature
{


public:
	// Constructor
	harryPotter();
	std::string getName();
	int initialStren();
	int Strengthfunc(int str);
	//Harry Potter atk and def funcs
	int atkRoll();
	int defRoll();

};

#endif