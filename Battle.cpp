/********************************************************
* Author: Thomas Mathew
* Assignment 3
* This is the Battle implementation file
* *****************************************************/

#include "Battle.h"
#include "Barbarian.h"
#include "Medusa.h"
#include "Vampire.h"
#include "blueMen.h"
#include "harryPotter.h"
#include <iostream>
#include <string>
using namespace std;

// Constructor

Battle::Battle()
{

}

//The Battle function holds the core of the Program's combat mechanics.
//For parameters, the program takes two pointers to the Parent Class (Creature), and the number of rounds to simulate.
//Thus, we allow the program to take any of the 5 Child classes as parameters.


int Battle::battleFunc(Creature* attacker, Creature* defender, int rounds)
{
	int damage1;
	int defStren;
	int harryLives = 1;
	string atkName = attacker->getName();
	string defName = defender->getName();
	defStren = defender->initialStren();
	cout << "Inital strength of " << defName << ": " << defStren << endl;

	for (int k = 0; k < rounds; k++)
	{
		//Use pointers to calculate the damage, using whatever objects were passed in.
		damage1 = (attacker->atkRoll() - defender->defRoll());


		if (damage1 > 0)
		{
			(defStren = ((defender->Strengthfunc(defStren) - damage1)));

			//Case where non-letal damage is dealt
			if (defStren > 0)
			{
				cout << atkName << " attacks! The attack did " << damage1 << " damage to the " << defName << ". It has " << defStren << " points of strength left." << endl;
			}

			//Cases where the defender is knocked out
			if (defStren < 1)
			{
				if (damage1 < 50)
				{
					//This handles the case where Harry is knocked out the first time. HarryLives is then set to 0 to ensure it only happens once.
					if ((defName == "Harry Potter") && (harryLives == 1))
					{
						cout << "The attack of the " << atkName << " did " << damage1 << " damage, and knocked out the " << defName << "!" << endl;
						cout << "But, Harry Potter was magically revived with a Strength of 20! This will only happen once." << endl;

						harryLives = 0;
						defender->Strengthfunc(20);
						defStren = 20;
					}

					//This is the "standard" knockout case
					else
					{
						cout << "The attack of the " << atkName << " did " << damage1 << " damage, and knocked out the " << defName << "!" << endl;
						return defStren;
					}
				}
				//This is the case where Medusa turns the defender into stone
				if (damage1 > 50)
				{
					cout << "The " << defName << " was knocked out!" << endl;
					return defStren;
				}
			}
		}

		//Case where the defense roll is higher than the attacking roll
		if (damage1 <= 0)
		{
			damage1 = 0;
			cout << "The attack of the " << atkName << " did no damage to the " << defName << ". It has " << defStren << " points of strength left." << endl;
		}

	}

	return defStren;
}

