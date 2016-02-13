/*********************************************************************
** Program Filename: harryPotter.hpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-02-12
** Description: HarryPotter class header file CS162_400 Assignment 3
*********************************************************************/

#ifndef HARRYPOTTER_HPP
#define HARRYPOTTER_HPP

//includes
#include "creature.hpp"

class HarryPotter : public Creature
{
protected:

public:
	HarryPotter();
	HarryPotter(int);
	~HarryPotter();
	int attack();
	int defend();
	string getName();
};

#endif
