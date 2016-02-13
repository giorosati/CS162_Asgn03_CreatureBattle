/*********************************************************************
** Program Filename: blueMen.cpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-02-12
** Description: BlueMen class implementation file CS162_400 Assignment 3
*********************************************************************/

//includes
#include <cstdlib>
#include <iostream>
#include "blueMen.hpp"

//usings
using std::cout;
using std::endl;

BlueMen::BlueMen()
{
	strength = 0;
}

BlueMen::BlueMen(int strengthIn)
{
	strength = strengthIn;
}

BlueMen::~BlueMen()
{
	//cout << "vampire deconstructor has run." << endl;
}

void BlueMen::attack()
{

}

void BlueMen::defend()
{

}

void BlueMen::displayName() //to be implemented in derived classes
{
	cout << "Blue Men";
}