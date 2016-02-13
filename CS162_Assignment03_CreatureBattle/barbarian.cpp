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
	strength = 0;
}

Barbarian::Barbarian(int strengthIn)
{
	strength = strengthIn;
}

Barbarian::~Barbarian()
{
	//cout << "medusa deconstructor has run." << endl;
}

void Barbarian::attack()
{

}

void Barbarian::defend()
{

}

void Barbarian::displayName() //to be implemented in derived classes
{
	cout << "Barbarian";
}