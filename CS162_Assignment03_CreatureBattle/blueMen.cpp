/*********************************************************************
** Program Filename: blueMen.cpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-02-12
** Description: BlueMen class implementation file CS162_400 Assignment 3
*********************************************************************/

//includes
#include <cstdlib>
#include <iostream>
#include "blueMen.hpp"

//usings
using std::cout;
using std::endl;

//BlueMen::BlueMen()
//{
//	strength = 0;
//}

BlueMen::BlueMen(int strengthIn)
	: Creature(strengthIn)
{}

BlueMen::~BlueMen()
{
	//cout << "vampire deconstructor has run." << endl;
}

int BlueMen::attack()
{
	int roll = (rand() % (10) + 1) + (rand() % (10) + 1);		//sum of two random numbers from 1 to 10
	return roll;
}

int BlueMen::defend(int damageIn, int x = 0)
{
	int roll = 0;
	if (this->strength < 5)	//when strength is 4 or less, use only one die
	{
		//cout << "only one die used..." << endl;
		roll = (rand() % (6) + 1) + 3;	//random number from 1 to 6, plus 3 for armor
		if ((damageIn - roll) < 0) roll = 0;
	}
	else if ((this->strength > 4) && (this->strength < 9))	//if strength 5 to 8, only two die are used
	{
		//cout << "only two die used..." << endl;
		roll = (rand() % (6) + 1) + (rand() % (6) + 1) + 3;	//sum of two random numbers from 1 to 6, plus 3 for armour
		if ((damageIn - roll) < 0) roll = 0;
	}
	else
	{
		//cout << "three die used..." << endl;
		roll = (rand() % (6) + 1) + (rand() % (6) + 1) + (rand() % (6) + 1) + 3;	//sum of three random numbers from 1 to 6, plus 3 armor
		if ((damageIn - roll) < 0) roll = 0;
	}
	return roll;
}

string BlueMen::getName()
{
	return "Blue Men";
}