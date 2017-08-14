/********************************************************
* Author: Thomas Mathew
* Assignment 3
* This is the Medusa implementation file
* *****************************************************/

#include "Medusa.h"
#include <iostream>
using namespace std;

// Constructor
Medusa::Medusa()
{
}

//Initial Strength = 8
int Medusa::initialStren()
{
	return 8;
}

int Medusa::Strengthfunc(int str)
{
	int Strength = str;
	return Strength;
}


int Medusa::atkRoll()
{
	int aResult;
	//Roll twice, sum = result
	aResult = ((rand() % 6 + 1) + (rand() % 6 + 1));
	//Glare effect check: if the roll is 12, the opponent is knocked out.
	if (aResult == 12)
	{
		cout << "Medusa turned the opponent to stone!" << endl;
		//Set result to a high number to ensure a knockout
		aResult = 100;
		return aResult;
	}
	return aResult;
}
int Medusa::defRoll()
{
	int dResult;
	//Roll once. Add 3 for the armor
	dResult = 3 + ((rand() % 6) + 1);
	return dResult;
}

//Get name is used when displaying battle results to the user
std::string Medusa::getName()
{
	string foo = "Medusa";
	return foo;
}