/******************************************************
* Author: Thomas Mathew
* Final Project
* This is the Bonus Zone header file
* ***************************************************/

#ifndef BONUSZONE_H
#define BONUSZONE_H
#include "Zone.h"
#include <iostream>
using namespace std;

// Declare the Bonus Zone Class

class bonusZone : public Zone
{

private:
	//	chemicalPlant *ptr1;


public:
	bonusZone();
	virtual void Welcome();
	virtual int Special();
	virtual int routeRun();


};

#endif