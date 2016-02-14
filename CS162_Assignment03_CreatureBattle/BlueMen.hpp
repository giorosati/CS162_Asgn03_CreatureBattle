/*********************************************************************
** Program Filename: blueMen.hpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-02-12
** Description: BlueMen class header file CS162_400 Assignment 3
*********************************************************************/

#ifndef BLUEMEN_HPP
#define BLUEMEN_HPP

//includes
#include "creature.hpp"

class BlueMen : public Creature
{
protected:

public:
	//BlueMen();
	BlueMen(int);
	~BlueMen();
	int attack();
	int defend(int,int);
	string getName();
};

#endif