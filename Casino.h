/******************************************************
* Author: Thomas Mathew
* Final Project
* This is the Casino Zone header file
* ***************************************************/

#ifndef CASINO_H
#define CASINO_H
#include "Zone.h"
#include <iostream>
using namespace std;

// Declare the Casino Class

class Casino : public Zone
{

private:
	//	chemicalPlant *ptr1;


public:
	Casino();
	virtual void Welcome();
	virtual int Special();
	virtual int routeRun();


};

#endif