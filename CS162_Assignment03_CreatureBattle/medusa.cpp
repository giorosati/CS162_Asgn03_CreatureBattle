/*********************************************************************
** Program Filename: medusa.cpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-02-11
** Description: Medusa class implementation file CS162_400 Assignment 3
*********************************************************************/

//includes
#include <cstdlib>
#include <iostream>
#include "medusa.hpp"

//usings
using std::cout;
using std::endl;

Medusa::Medusa()
{
	strength = 0;
}

Medusa::Medusa(int strengthIn)
{
	strength = strengthIn;
}

Medusa::~Medusa()
{
	//cout << "medusa deconstructor has run." << endl;
}

int Medusa::attack()
{
	return 3;
}

int Medusa::defend()
{
	return 1;
}
string Medusa::getName()
{
	return "Medusa";
}