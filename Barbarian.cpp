/********************************************************
* Author: Thomas Mathew
* Assignment 3
* This is the Barbarian implementation file
* *****************************************************/

#include "Barbarian.h"
#include <iostream>
using namespace std;

// Constructor
Barbarian::Barbarian()
{
}

//Initial Strength = 12
int Barbarian::initialStren()
{
	return 12;
}

int Barbarian::Strengthfunc(int str)
{
	int Strength = str;
	return Strength;
}

int Barbarian::atkRoll()
{
	int aResult;
	//Roll twice, sum = result
	aResult = (((rand() % 6) + 1) + ((rand() % 6) + 1));
	return aResult;
}
int Barbarian::defRoll()
{
	int dResult;
	//Roll twice, sum = result. 
	dResult = (((rand() % 6) + 1) + ((rand() % 6) + 1));
	return dResult;
}

//Get name is used when displaying battle results to the user
std::string Barbarian::getName()
{
	string foo = "Barbarian";
	return foo;
}