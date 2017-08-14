/********************************************************
* Author: Thomas Mathew
* Assignment 3
* This is the Harry Potter implementation file
* *****************************************************/

#include "harryPotter.h"
#include <iostream>
using namespace std;

// Constructor
harryPotter::harryPotter()
{
}

//Initial Strength = 10
int harryPotter::initialStren()
{
	return 10;
}

int harryPotter::Strengthfunc(int str)
{
	int Strength = str;
	return Strength;
}

int harryPotter::atkRoll()
{
	int aResult;
	//Roll twice, sum = result
	aResult = (((rand() % 6) + 1) + ((rand() % 6) + 1));
	return aResult;
}
int harryPotter::defRoll()
{
	int dResult;
	//Roll twice, sum = result
	dResult = (((rand() % 6) + 1) + ((rand() % 6) + 1));
	return dResult;
}

//Get name is used when displaying battle results to the user
std::string harryPotter::getName()
{
	string foo = "Harry Potter";
	return foo;
}