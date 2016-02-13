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

//Medusa::Medusa()
//{
//	strength = 0;
//}

Medusa::Medusa(int strengthIn)
	: Creature(strengthIn)
{}

Medusa::~Medusa()
{
	//cout << "medusa deconstructor has run." << endl;
}

int Medusa::attack()
{
	int roll = (rand() % (6) + 1) + (rand() % (6) + 1);		//sum of two random numbers from 1 to 6
	return roll;
}

int Medusa::defend()
{
	int roll = (rand() % (6) + 1);		//random numbers from 1 to 6
	return roll;
}
string Medusa::getName()
{
	return "Medusa";
}