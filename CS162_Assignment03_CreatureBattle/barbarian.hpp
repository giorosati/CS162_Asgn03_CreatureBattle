/*********************************************************************
** Program Filename: barbarian.hpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-02-12
** Description: Barbarian class header file CS162_400 Assignment 3
*********************************************************************/

#ifndef BRABARIAN_HPP
#define BRABARIAN_HPP

//includes
#include "creature.hpp"

class Barbarian : public Creature
{
protected:

public:
	//Barbarian();
	Barbarian(int);
	~Barbarian();
	int attack();
	int defend(int,int);
	string getName();
};

#endif