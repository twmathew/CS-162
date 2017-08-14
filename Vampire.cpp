/********************************************************
* Author: Thomas Mathew
* Assignment 3
* This is the Vampire implementation file
* *****************************************************/

#include "Vampire.h"
#include <iostream>
using namespace std;

// Constructor
Vampire::Vampire()
{
}

//Initial Strength = 18
int Vampire::initialStren()
{
	return 18;
}

int Vampire::Strengthfunc(int str)
{
	int Strength = str;
	return Strength;
}


int Vampire::atkRoll()
{
	int aResult;
	//Roll twice, sum = result
	aResult = (((rand() % 12) + 1));
	return aResult;
}
int Vampire::defRoll()
{
	int dResult;

	//50% chance to Charm the opponent and avoid damage
	int charmCheck;
	charmCheck = rand() % 2;
	if (charmCheck == 1)
	{
		dResult = 100;
		return dResult;
	}

	//Non-charm case: Roll once. Add 1 for the armor
	dResult = 1 + ((rand() % 6) + 1);
	return dResult;
}

//Get name is used when displaying battle results to the user
std::string Vampire::getName()
{
	string foo = "Vampire";
	return foo;
}