/******************************************************
* Author: Thomas Mathew
* Assignment 3
* This is the Creature header file
* ***************************************************/

#ifndef CREATURE_H
#define CREATURE_H
//Include cstdlib for the rand function.
#include <cstdlib>
#include <iostream>
using namespace std;

// Declare the base Creature Class

class Creature
{


public:

	// No Constructor since we will never instantiate Creature

	//Declare virtual functions. Each Class will have its own definition for these.
	virtual int atkRoll() = 0;
	virtual int defRoll();
	virtual int initialStren();
	virtual int Strengthfunc(int str);
	virtual std::string getName();

};

#endif
