/*********************************************************************
** Program Filename: creature.cpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-02-11
** Description: Creature class implementation file CS162_400 Assignment 3
*********************************************************************/

//includes
#include <cstdlib>
#include <iostream>
#include "creature.hpp"

//usings
using std::cout;
using std::endl;

Creature::Creature()
{
}

//Creature::Creature(int strengthIn)
//{
//	this->strength = strengthIn;
//}

Creature::~Creature()
{
	//cout << "creature deconstructor has run" << endl;
}

//int Creature::attack()	//to be implemented in derived classes
//{}

//int Creature::defend()	//to be implemented in derived classes
//{}

//string Creature::getName() //to be implemented in derived classes
//{}

int Creature::getStength()
{
	return strength;
};

void Creature::setStrength(int strengthIn)
{
	strength = strengthIn;
}