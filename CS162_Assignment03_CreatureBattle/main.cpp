/*********************************************************************
** Program Filename: main.hpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-02-12
** Description: main.cpp file for CS162_400 Assignment 3
*********************************************************************/

//includes
#include <iostream>
#include <string>
#include <time.h>
#include "creature.hpp"
#include "medusa.hpp"
#include "barbarian.hpp"
#include "vampire.hpp"
#include "blueMen.hpp"
#include "harryPotter.hpp"

//usings
using std::cout;
using std::endl;
using std::cin;
using std::srand;
using std::rand;
using std::string;

//function prototypes
void displayMenu();

int main()
{
	//initialize random number generator
	srand((unsigned)time(NULL));

	//initialize variables for program exit and menu choice
	int exitToggle = 1;
	int menuChoice1 = 6;
	int menuChoice2 = 6;

	//initialize variables for two creatures
	Creature* creatureOne = NULL;
	Creature* creatureTwo = NULL;

	//initalize variables for Creature Names

	cout << "*****  Creature Battle Game  *****" << endl;
	cout << endl;

	//display menu
	while (exitToggle != 0)
	{
		//display menu function
		displayMenu();
		//get user selection for Creature #1
		cout << "Enter your choicefor Creature #1: ";
		cin >> menuChoice1;
		cout << endl;
		if (menuChoice1 == 0) { exitToggle = 0; }
		if (exitToggle != 0)
		{
			//get user selection for Creature #2
			cout << "Enter your choicefor Creature #2: ";
			cin >> menuChoice2;
			cout << endl;
			if (menuChoice2 == 0) { exitToggle = 0; }
		}
		if (exitToggle != 0) //enter the battle if user has not chosen 0
		{
			Creature* creatureOne = createCreature(menuChoice1);	//create creature 1
			Creature* creatureTwo = createCreature(menuChoice2);	//create creature 2
		}

		cout << "Creature One is " << creatureOne->displayName << endl;
		cout << "Creature Two is " << creatureTwo->displayName << endl;
		cout << endl;
		cout << "Press enter to begin the battle..." << endl;
		cin.get();

		//call creatureOne attack
		creatureOne->attack();




	}	//end of while loop

	cout << endl;
	cout << "Goodbye...........";
	cin.get();

	cout << endl;
	cout << endl;
	cout << endl;
	return 0;
}

//display menu function
void displayMenu()
{
	cout << "You will choose two Creatures for a battle." << endl;
	cout << "Please choose a type of Creature to do battle." << endl;
	cout << "********************************************" << endl;
	cout << "*                                           " << endl;
	cout << "*   1 for Medusa                            " << endl;
	cout << "*   2 for Barbarian                         " << endl;
	cout << "*   3 for Vampire                           " << endl;
	cout << "*   4 for Blue Men                          " << endl;
	cout << "*   5 for Harry Potter                      " << endl;
	cout << "*             OR                            " << endl;
	cout << "*   0 to exit the program                   " << endl;
	cout << "*                                           " << endl;
	cout << "********************************************" << endl;
	cout << endl;
	cout << endl;
}

Creature* createCreature(int menuChoice)
{
	switch (menuChoice)
	{
	case 1:	//medusa
	{
		Creature* creatureOut = new Medusa;
		return creatureOut;
	}
	case 2:	//barbarian
	{
		Creature* creatureOut = new Barbarian;
		return creatureOut;
	}
	case 3: //vampire
	{
		Creature* creatureOut = new Vampire;
		return creatureOut;
	}
	case 4:	//blue men
	{
		Creature* creatureOut = new BlueMen;
		return creatureOut;
	}
	case 5:	//harry potter
	{
		Creature* creatureOut = new HarryPotter;
		return creatureOut;
	}
	} //end switch for create Creature
}