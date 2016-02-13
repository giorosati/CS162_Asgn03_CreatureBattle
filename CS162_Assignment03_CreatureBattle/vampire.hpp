/*********************************************************************
** Program Filename: vampire.hpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-02-12
** Description: Vampire class header file CS162_400 Assignment 3
*********************************************************************/

#ifndef VAMPIRE_HPP
#define VAMPIRE_HPP

//includes
#include "creature.hpp"

class Vampire : public Creature
{
protected:

public:
	Vampire();
	Vampire(int);
	~Vampire();
	void attack();
	void defend();
	void displayName();
};

#endif
