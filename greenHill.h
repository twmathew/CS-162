/******************************************************
* Author: Thomas Mathew
* Final Project
* This is the Green Hill Zone header file
* ***************************************************/

#ifndef GREENHILL_H
#define GREENHILL_H
#include "Zone.h"
#include <iostream>
using namespace std;

// Declare the Green Hill Class

class greenHill : public Zone
{

private:
//	chemicalPlant *ptr1;


public:
	greenHill();
	virtual void Welcome();
	virtual int Special();
	virtual int routeRun();


};

#endif