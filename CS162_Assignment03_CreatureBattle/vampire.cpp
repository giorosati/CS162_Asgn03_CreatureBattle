/*********************************************************************
** Program Filename: vampire.cpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-02-12
** Description: Vampire class implementation file CS162_400 Assignment 3
*********************************************************************/

//includes
#include <cstdlib>
#include <iostream>
#include "vampire.hpp"

//usings
using std::cout;
using std::endl;

//Vampire::Vampire()
//{
//	strength = 0;
//}

Vampire::Vampire(int strengthIn)
	: Creature(strengthIn)
{}

Vampire::~Vampire()
{
	//cout << "vampire deconstructor has run." << endl;
}

int Vampire::attack()
{
	int roll = (rand() % (12) + 1);		//random number from 1 to 12
	return roll;
}

int Vampire::defend(int damageIn, int x = 0)
{
	int charm = (rand() % (2) + 1);		//random number of 1 or 2
	if (charm == 2) return 200;
	else
	{
		int roll = (rand() % (6) + 1) + 1;		//random number from 1 to 6, plus armor value of 1
		if ((damageIn - roll) < 0) return 0;
		else return (damageIn - roll);
	}
}

string Vampire::getName()
{
	return "Vampire";
}