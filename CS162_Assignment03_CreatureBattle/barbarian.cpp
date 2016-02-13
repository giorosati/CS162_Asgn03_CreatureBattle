/*********************************************************************
** Program Filename: barbarian.cpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-02-12
** Description: Barbarian class implementation file CS162_400 Assignment 3
*********************************************************************/

//includes
#include <cstdlib>
#include <iostream>
#include "barbarian.hpp"

//usings
using std::cout;
using std::endl;

Barbarian::Barbarian()
{
	strength = 12;
}

//Barbarian::Barbarian(int strengthIn)
//{
//	strength = strengthIn;
//}

Barbarian::~Barbarian()
{
	//cout << "medusa deconstructor has run." << endl;
}

int Barbarian::attack()
{
	return 3;
}

int Barbarian::defend()
{
	return 1;
}

string Barbarian::getName()
{
	return "Barbarian";
}