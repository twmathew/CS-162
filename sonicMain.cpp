/*************************************************************
* Author: Thomas Mathew
* Final Project
* Main File 
* ******************************************************/

#include "Zone.h"
#include "greenHill.h"
#include "bonusZone.h"
#include "Casino.h"
#include "Aqua.h"
#include "Lava.h"
#include <iostream>
#include <ctime>
using namespace std;


int main()
{
//Seed Rand
	srand(time(NULL));
//Initialize variables to track the player's progress
	int greenEmerald = 0;
	int purpleEmerald = 0;
	int goldEmerald = 0;
	int blueEmerald = 0;
	int crimsonEmerald = 0;
	int result = 0;
	int result2 = 0;
	int Lives = 4;
	int Rings = 0;
	int zoneChoice;
	int redundant = 1;

//Initialize the 5 zones, and all their pointers to the other zones.

greenHill G;
bonusZone B;
Aqua A;
Casino C;
Lava L;

G.ptrArray[0] = &B;
G.ptrArray[1] = &A;
G.ptrArray[2] = &C;
G.ptrArray[3] = &L;

B.ptrArray[0] = &G;
B.ptrArray[1] = &A;
B.ptrArray[2] = &C;
B.ptrArray[3] = &L;

A.ptrArray[0] = &G;
A.ptrArray[1] = &B;
A.ptrArray[2] = &C;
A.ptrArray[3] = &L;

C.ptrArray[0] = &G;
C.ptrArray[1] = &B;
C.ptrArray[2] = &A;
C.ptrArray[3] = &L;

L.ptrArray[0] = &G;
L.ptrArray[1] = &B;
L.ptrArray[2] = &A;
L.ptrArray[3] = &C;

cout << "\n" << "Welcome to SONIC THE HEDGEHOG!" << "\n" << "In this game you will control the world's fastest blue hero." << endl;
cout << "Sonic must find all 5 Chaos Emeralds, hidden somewhere in the 5 Zones." << endl;
cout << "Only then can he defeat the evil Dr. Robotnik." << "\n" << endl;
cout << "Sonic starts with 4 lives, no Rings, and no Emeralds." << "\n" << "If Sonic gets some Rings, they will protect him from taking damage." << endl;
cout << "If Sonic takes damage while holding some Rings, he loses all his Rings." << "\n" << "If he takes damage without any Rings, he will lose a life." << "\n" << endl;
cout << "Each Zone will have its own twists and turns. Choose Wisely!" << endl;
cout << "The game will ask you to make many decisions." << "\n" << "To make a choice, enter the number next to the option and press Enter." << "\n" << endl;
cout << "Choose a Zone to start with. They are listed in order of difficulty." << endl;
cout << "1. " << G.getName() << "\n" << "2. " << B.getName() << "\n" << "3. " << A.getName() << "\n" << "4. " << C.getName() << "\n" << "5. " << L.getName() << "\n";
cin >> zoneChoice;
if ((zoneChoice != 1) && (zoneChoice != 2) && (zoneChoice != 3) && (zoneChoice != 4) && (zoneChoice != 5))
{
	cout << "You entered Invalid Input. Please re-run program." << endl;
	return 0;
}

//This is the main game loop
while (Lives > 0)
{



	if ((zoneChoice == 1 && greenEmerald == 1) || (zoneChoice == 2 && purpleEmerald == 1) || (zoneChoice == 3 && blueEmerald == 1)
		|| (zoneChoice == 4 && goldEmerald == 1) || (zoneChoice == 5 && crimsonEmerald == 1))
	{
		cout << "Sonic already found the Emerald in that zone!" << endl;
		cout << "Choose your next Zone:" << endl;
		cout << "1. " << G.getName() << "\n" << "2. " << B.getName() << "\n" << "3. " << A.getName() << "\n" << "4. " << C.getName() << "\n" << "5. " << L.getName() << "\n";
		cin >> zoneChoice;
		if ((zoneChoice != 1) && (zoneChoice != 2) && (zoneChoice != 3) && (zoneChoice != 4) && (zoneChoice != 5))
		{
			cout << "You entered Invalid Input. " << endl;
		}
		//Setting redundant == 2 will skip the rest of the full while loop, so we will come back to this if statement to check again whether Sonic already has the emerald.
		redundant = 2;
	}
	else
	{
		//The standard case
		redundant = 1;
	}


	if (zoneChoice == 1 && redundant == 1)
	{
		G.Welcome();
		result += G.routeRun();
		if (result != 4)
		{
			//Lets them try again if they don't find the emerald on the first try
			G.Special();
			result2 += G.routeRun();
		}
		G.exitZone();
	}
	if (zoneChoice == 2 && redundant == 1)
	{
		B.Welcome();
		//Bonus special is just output-just tells them that they can't be damaged in the bonus zone
		B.Special();
		result += B.routeRun();
		B.exitZone();
	}
	if (zoneChoice == 3 && redundant == 1)
	{
		A.Welcome();
		//Check if Sonic has to come up for Air
		result = A.Special();
		if (result == 0)
		{
			//If not, proceed normally
			result = A.routeRun();
		}
		else
		{
			//Had to come up for air so nothing happened
			result = 0;
		}
		A.exitZone();
	}
	if (zoneChoice == 4 && redundant == 1)
	{
		C.Welcome();
		//Player gets to hit the slots each time they visit the Casino Zone
		result += C.Special();
		result2 += C.routeRun();
		C.exitZone();
	}
	if (zoneChoice == 5 && redundant == 1)
	{
		L.Welcome();
		//Sonic has a chance to slip and fall into the Lava when entering this zone.
		result += L.Special();
		if (result == 0)
		{
			result += L.routeRun();
		}
		L.exitZone();
	}

	//Take their zone choice input. Needs to be outside the if statements to ensure full "while" loop runs each time
	if (redundant == 1)
	{
		cin >> zoneChoice;
	}

//	cout << "current result : " << result << endl;

//Make changes based on the result
	if (result == 0)
	{		//Nothing happens
	}
	if (result == 1)
	{	//Got some rings. It doesn't matter how many rings Sonic has, only difference is 0 or more than 0.
		Rings += 1;
	}
	if (result == 2)
	{	//Got an Extra Life
		Lives += 1;
	}
	if (result == 3)
	{	//Took Damage. Lose Rings (to zero), or a Life if Sonic doesn't have any rings.
		if (Rings > 0)
		{
			Rings = 0;
		}
		if (Rings == 0)
		{
			Lives -= 1;
		}
	}
	if (result == 4)
	{	//Got the Green emerald
		greenEmerald = 1;
	}
	if (result == 5)
	{	//Got the Purple emerald
		purpleEmerald = 1;
	}
	if (result == 6)
	{	//Got the Gold emerald
		goldEmerald = 1;
	}
	if (result == 7)
	{	//Got the Blue emerald
		blueEmerald = 1;
	}
	if (result == 8)
	{	//Got the Crimson emerald
		crimsonEmerald = 1;
	}

//Reset the value
	result = 0;

//Make changes based on result2. These can come from Green Hill round 2, or the Casino slot machine. 
//(the slot machine actually corresponds to "result", not "result2", since it happens first.)
	if (result2 == 0)
	{		//Nothing happens
	}
	if (result2 == 1)
	{	//Got some rings. It doesn't matter how many rings Sonic has, only difference is 0 or more than 0.
		Rings += 1;
	}
	if (result2 == 2)
	{	//Got an Extra Life
		Lives += 1;
	}
	if (result2 == 3)
	{	//Took Damage. Lose Rings (to zero), or a Life if Sonic doesn't have any rings.
		if (Rings > 0)
		{
			Rings = 0;
		}
		if (Rings == 0)
		{
			Lives -= 1;
		}
	}
	if (result2 == 4)
	{	//Got the Green emerald
		greenEmerald = 1;
	}
	if (result2 == 6)
	{	//Got the Gold emerald
		goldEmerald = 1;
	}

//Reset the value
	result2 = 0;

	if ((greenEmerald == 1) && (purpleEmerald == 1) && (goldEmerald == 1) && (blueEmerald == 1) && (crimsonEmerald == 1))
	{
		cout << "\n" << "Wait a minute - Sonic found all the Emeralds!!!" << "\n" << "You won! Great Job!" << endl;
		return 0;
	}

	if (Lives <= 0)
	{
		cout << "Wait a minute - Sonic ran out of lives. Game Over!" << endl;
		return 0;
	}

	cout << "\n" << "Status:" << "\n" << "Sonic currently has " << Lives << " Lives" << endl;
	if (Rings != 0)
	{
		cout << "Sonic currently has some Rings." << endl;
	}
	if (Rings == 0)
	{
		cout << "Sonic currently has no Rings." << endl;
	}
	cout << "Sonic currently has " << (greenEmerald + purpleEmerald + goldEmerald + blueEmerald + crimsonEmerald) << " Emerald(s)." << "\n" << endl;

}

return 0;
}