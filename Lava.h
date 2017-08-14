/******************************************************
* Author: Thomas Mathew
* Final Project
* This is the Lava Zone header file
* ***************************************************/

#ifndef LAVA_H
#define LAVA_H
#include "Zone.h"
#include <iostream>
using namespace std;

// Declare the Lava Class

class Lava : public Zone
{

private:
	//	chemicalPlant *ptr1;


public:
	Lava();
	virtual void Welcome();
	virtual int Special();
	virtual int routeRun();


};

#endif