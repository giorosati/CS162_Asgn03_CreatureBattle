/*********************************************************************
** Program Filename: harryPotter.cpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-02-12
** Description: HarryPotter class implementation file CS162_400 Assignment 3
*********************************************************************/

//includes
#include <cstdlib>
#include <iostream>
#include "harryPotter.hpp"

//usings
using std::cout;
using std::endl;

//HarryPotter::HarryPotter()
//{
//	strength = 0;
//}

HarryPotter::HarryPotter(int strengthIn)
	: Creature(strengthIn)
{}

HarryPotter::~HarryPotter()
{
	//cout << "vampire deconstructor has run." << endl;
}

int HarryPotter::attack()
{
	int roll = (rand() % (6) + 1) + (rand() % (6) + 1);		//sum of two random numbers from 1 to 6
	return roll;
}

int HarryPotter::defend(int damageIn, int deathCount)
{
	int roll = (rand() % (6) + 1) + (rand() % (6) + 1);		//sum of two random numbers from 1 to 6
	if (((damageIn - roll) >= strength) && (deathCount == 0))
	{
		strength = 20;
		return (damageIn - roll);
	}
	else if ((damageIn - roll) < 0) return 0;
	else return (damageIn - roll);
}

string HarryPotter::getName()
{
	return "Harry Potter";
}