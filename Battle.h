/******************************************************
* Author: Thomas Mathew
* Assignment 3
* This is the Battle header file
* ***************************************************/

#ifndef BATTLE_H
#define BATTLE_H
#include "Creature.h"
#include <iostream>
using namespace std;

// Declare the Battle Class

class Battle
{

public:
	// Constructor
	Battle();

	int battleFunc(Creature* attacker, Creature* defender, int rounds);

};

#endif
