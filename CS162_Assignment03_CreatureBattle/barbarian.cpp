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

//Barbarian::Barbarian()
//{
//	strength = 12;
//}

Barbarian::Barbarian(int strengthIn)
	: Creature(strengthIn)
{}

Barbarian::~Barbarian()
{
	//cout << "medusa deconstructor has run." << endl;
}

int Barbarian::attack()
{
	int roll = (rand() % (6) + 1) + (rand() % (6) + 1);		//sum of two random numbers from 1 to 6
	return roll;
}

int Barbarian::defend(int damageIn, int x = 0)
{
	int roll = (rand() % (6) + 1) + (rand() % (6) + 1);		//sum of two random numbers from 1 to 6
	if ((damageIn - roll) < 0) return 0;
	else return (damageIn - roll);
}

string Barbarian::getName()
{
	return "Barbarian";
}