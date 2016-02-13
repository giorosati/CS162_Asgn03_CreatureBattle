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

Vampire::Vampire()
{
	strength = 0;
}

Vampire::Vampire(int strengthIn)
{
	strength = strengthIn;
}

Vampire::~Vampire()
{
	//cout << "vampire deconstructor has run." << endl;
}

int Vampire::attack()
{
	return 3;
}

int Vampire::defend()
{
	return 1;
}

string Vampire::getName()
{
	return "Vampire";
}