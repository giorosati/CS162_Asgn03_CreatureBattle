/*********************************************************************
** Program Filename: medusa.hpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-02-11
** Description: Medusa class header file CS162_400 Assignment 3
*********************************************************************/

#ifndef MEDUSA_HPP
#define MEDUSA_HPP

//includes
#include "creature.hpp"

class Medusa : public Creature
{
protected:

public:
	Medusa();
	Medusa(int);
	~Medusa();
	int attack();
	int defend();
	string getName();
};

#endif