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
	return 3;
}

int HarryPotter::defend()
{
	return 1;
}

string HarryPotter::getName()
{
	return "Harry Potter";
}