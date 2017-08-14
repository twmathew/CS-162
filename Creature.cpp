/********************************************************
* Author: Thomas Mathew
* Assignment 3
* This is the Creature implementation file
* *****************************************************/

#include "Creature.h"
#include <iostream>
using namespace std;

// No Constructor

//These functions contain nothing meaningful. There are purely here as virtual functions for the Child classes.

int Creature::atkRoll()
{
	return 0;
}
int Creature::defRoll()
{
	return 0;
}

int Creature::initialStren()
{
	return 0;
}
int Creature::Strengthfunc(int str)
{
	return 0;
}

std::string Creature::getName()
{
	string foo = "hello";
	return foo;
}