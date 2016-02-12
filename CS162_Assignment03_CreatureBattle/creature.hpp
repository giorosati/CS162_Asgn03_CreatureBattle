/*********************************************************************
** Program Filename: creature.hpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-02-11
** Description: Creature class header file CS162_400 Assignment 3
*********************************************************************/

#ifndef CREATURE_HPP
#define CREATURE_HPP

//includes

class Creature
{
protected:
	int strength;

public:
	Creature();					//default constructor
	Creature(int);				//constructor w/int for strength
	~Creature();				//deconstructor
	virtual void attack();		//attack function prototype
	virtual void defend();		//defend function prototype
	int getStength();			//getter for strength
};

#endif
