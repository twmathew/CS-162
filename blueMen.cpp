/********************************************************
* Author: Thomas Mathew
* Assignment 3
* This is the Blue Men implementation file
* *****************************************************/

#include "blueMen.h"
#include <iostream>
using namespace std;

// Constructor
blueMen::blueMen()
{
}

//Initial Strength = 12
int blueMen::initialStren()
{
	return 12;
}

int blueMen::Strengthfunc(int str)
{
	int Strength = str;
	return Strength;
}

int blueMen::atkRoll()
{
	int aResult;
	//Roll twice, sum = result
	aResult = (((rand() % 10) + 1) + ((rand() % 10) + 1));
	return aResult;
}
int blueMen::defRoll()
{
	int dResult;
	//Roll three times, sum = result. Plus 3 armor
	dResult = 3 + (((rand() % 6) + 1) + ((rand() % 6) + 1) + ((rand() % 6) + 1));
	return dResult;
}

//Get name is used when displaying battle results to the user
std::string blueMen::getName()
{
	string foo = "Blue Men";
	return foo;
}