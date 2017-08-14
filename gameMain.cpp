/*************************************************************
* Author: Thomas Mathew
* Main File for Creature Game
* ******************************************************/

#include "Creature.h"
#include "Barbarian.h"
#include "Battle.h"
#include "Medusa.h"
#include "Vampire.h"
#include "blueMen.h"
#include "harryPotter.h"
#include <iostream>
using namespace std;

//The main file will ask the user to choose the attacker and defender, and how many rounds to simulate.
//After, they can continue to perform more simulations, or exit the program.

int main()
{

//The program will run as many times as the user wants. They will have the option to end it after each simulation.
	int x = 1;
	int loopInput;
	while (x > 0)
	{

//Define variables for each loop iteration to clear them
		int atkInput;
		int defInput;
		int roundCounter;

//Explain program and get User input
		cout << "This program is a combat simulator between 5 different types of creatures." << endl << endl;
		cout << "The types are: Barbarian, Medusa, Vampire, Blue Men, and Harry Potter." << endl << endl;
		cout << "Choose the attacking creature. Enter 1 for Barbarian, 2 for Medusa, " << endl;
		cout << "3 for Vampire, 4 for Blue Men, and 5 for Harry Potter." << endl;
		cin >> atkInput;
		cout << "Choose the defending creature. Enter 1 for Barbarian, 2 for Medusa, " << endl;
		cout << "3 for Vampire, 4 for Blue Men, and 5 for Harry Potter." << endl;
		cin >> defInput;
		cout << "How many rounds do you want to simulate?" << endl;
		cin >> roundCounter;

//Battle function for an attacking Barbarian vs all possible defenders
		if (atkInput == 1)
		{
			if (defInput == 1)
			{
				Creature *ptr1 = new Barbarian();
				Creature *ptr2 = new Barbarian();
				Battle fight;
				int valueHolder = (fight.battleFunc(ptr1, ptr2, roundCounter));
			}
			if (defInput == 2)
			{
				Creature *ptr1 = new Barbarian();
				Creature *ptr2 = new Medusa();
				Battle fight;
				int valueHolder = (fight.battleFunc(ptr1, ptr2, roundCounter));
			}
			if (defInput == 3)
			{
				Creature *ptr1 = new Barbarian();
				Creature *ptr2 = new Vampire();
				Battle fight;
				int valueHolder = (fight.battleFunc(ptr1, ptr2, roundCounter));
			}
			if (defInput == 4)
			{
				Creature *ptr1 = new Barbarian();
				Creature *ptr2 = new blueMen();
				Battle fight;
				int valueHolder = (fight.battleFunc(ptr1, ptr2, roundCounter));
			}
			if (defInput == 5)
			{
				Creature *ptr1 = new Barbarian();
				Creature *ptr2 = new harryPotter();
				Battle fight;
				int valueHolder = (fight.battleFunc(ptr1, ptr2, roundCounter));
			}
		}
//Battle function for an attacking Medusa vs all possible defenders
		if (atkInput == 2)
		{
			if (defInput == 1)
			{
				Creature *ptr1 = new Medusa();
				Creature *ptr2 = new Barbarian();
				Battle fight;
				int valueHolder = (fight.battleFunc(ptr1, ptr2, roundCounter));
			}
			if (defInput == 2)
			{
				Creature *ptr1 = new Medusa();
				Creature *ptr2 = new Medusa();
				Battle fight;
				int valueHolder = (fight.battleFunc(ptr1, ptr2, roundCounter));
			}
			if (defInput == 3)
			{
				Creature *ptr1 = new Medusa();
				Creature *ptr2 = new Vampire();
				Battle fight;
				int valueHolder = (fight.battleFunc(ptr1, ptr2, roundCounter));
			}
			if (defInput == 4)
			{
				Creature *ptr1 = new Medusa();
				Creature *ptr2 = new blueMen();
				Battle fight;
				int valueHolder = (fight.battleFunc(ptr1, ptr2, roundCounter));
			}
			if (defInput == 5)
			{
				Creature *ptr1 = new Medusa();
				Creature *ptr2 = new harryPotter();
				Battle fight;
				int valueHolder = (fight.battleFunc(ptr1, ptr2, roundCounter));
			}
		}
//Battle function for an attacking Vampire vs all possible defenders
		if (atkInput == 3)
		{
			if (defInput == 1)
			{
				Creature *ptr1 = new Vampire();
				Creature *ptr2 = new Barbarian();
				Battle fight;
				int valueHolder = (fight.battleFunc(ptr1, ptr2, roundCounter));
			}
			if (defInput == 2)
			{
				Creature *ptr1 = new Vampire();
				Creature *ptr2 = new Medusa();
				Battle fight;
				int valueHolder = (fight.battleFunc(ptr1, ptr2, roundCounter));
			}
			if (defInput == 3)
			{
				Creature *ptr1 = new Vampire();
				Creature *ptr2 = new Vampire();
				Battle fight;
				int valueHolder = (fight.battleFunc(ptr1, ptr2, roundCounter));
			}
			if (defInput == 4)
			{
				Creature *ptr1 = new Vampire();
				Creature *ptr2 = new blueMen();
				Battle fight;
				int valueHolder = (fight.battleFunc(ptr1, ptr2, roundCounter));
			}
			if (defInput == 5)
			{
				Creature *ptr1 = new Vampire();
				Creature *ptr2 = new harryPotter();
				Battle fight;
				int valueHolder = (fight.battleFunc(ptr1, ptr2, roundCounter));
			}
		}
//Battle function for an attacking Blue Men vs all possible defenders
		if (atkInput == 4)
		{
			if (defInput == 1)
			{
				Creature *ptr1 = new blueMen();
				Creature *ptr2 = new Barbarian();
				Battle fight;
				int valueHolder = (fight.battleFunc(ptr1, ptr2, roundCounter));
			}
			if (defInput == 2)
			{
				Creature *ptr1 = new blueMen();
				Creature *ptr2 = new Medusa();
				Battle fight;
				int valueHolder = (fight.battleFunc(ptr1, ptr2, roundCounter));
			}
			if (defInput == 3)
			{
				Creature *ptr1 = new blueMen();
				Creature *ptr2 = new Vampire();
				Battle fight;
				int valueHolder = (fight.battleFunc(ptr1, ptr2, roundCounter));
			}
			if (defInput == 4)
			{
				Creature *ptr1 = new blueMen();
				Creature *ptr2 = new blueMen();
				Battle fight;
				int valueHolder = (fight.battleFunc(ptr1, ptr2, roundCounter));
			}
			if (defInput == 5)
			{
				Creature *ptr1 = new blueMen();
				Creature *ptr2 = new harryPotter();
				Battle fight;
				int valueHolder = (fight.battleFunc(ptr1, ptr2, roundCounter));
			}
		}
//Battle function for an attacking Harry Potter vs all possible defenders
		if (atkInput == 5)
		{
			if (defInput == 1)
			{
				Creature *ptr1 = new harryPotter();
				Creature *ptr2 = new Barbarian();
				Battle fight;
				int valueHolder = (fight.battleFunc(ptr1, ptr2, roundCounter));
			}
			if (defInput == 2)
			{
				Creature *ptr1 = new harryPotter();
				Creature *ptr2 = new Medusa();
				Battle fight;
				int valueHolder = (fight.battleFunc(ptr1, ptr2, roundCounter));
			}
			if (defInput == 3)
			{
				Creature *ptr1 = new harryPotter();
				Creature *ptr2 = new Vampire();
				Battle fight;
				int valueHolder = (fight.battleFunc(ptr1, ptr2, roundCounter));
			}
			if (defInput == 4)
			{
				Creature *ptr1 = new harryPotter();
				Creature *ptr2 = new blueMen();
				Battle fight;
				int valueHolder = (fight.battleFunc(ptr1, ptr2, roundCounter));
			}
			if (defInput == 5)
			{
				Creature *ptr1 = new harryPotter();
				Creature *ptr2 = new harryPotter();
				Battle fight;
				int valueHolder = (fight.battleFunc(ptr1, ptr2, roundCounter));
			}
		}

//Input check/Error Message
		if ((atkInput > 5) || (atkInput < 1) || (defInput > 5) || (defInput < 1) || (roundCounter < 1))
		{
			cout << "You seem to have entered invalid input. Please re-run program." << endl;
				return 0;
		}
		
//Give the option to run again or close program
		cout << "Would you like to run the simulator again? If so, enter 1. If finished, enter 0." << endl;
		cin >> loopInput;
		x = loopInput;
	}


	return 0;
}
