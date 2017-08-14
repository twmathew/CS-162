/******************************************************
* Author: Thomas Mathew
* Final Project
* This is the Aqua Zone header file
* ***************************************************/

#ifndef AQUA_H
#define AQUA_H
#include "Zone.h"
#include <iostream>
using namespace std;

// Declare the Aqua Class

class Aqua : public Zone
{

private:
	//	chemicalPlant *ptr1;


public:
	Aqua();
	virtual void Welcome();
	virtual int Special();
	virtual int routeRun();


};

#endif