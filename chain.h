// chain.h
// Addeline Mitchell
// 1 May 2016
//
// For CS 372 Spring 2016, Assn 4 Exercise A
// Header file for chain class


#ifndef CHAIN_H
#define CHAIN_H


#include "nameGen.h"


// Chain
// this class is used to create & move through responsibility
// chains made up of objects from itself & its derived classes
class Chain : public Name
{
protected:
	Chain *next;

public:
	// default ctor
	Chain()
	{ next = nullptr; }
	
	// virtual dctor
	// to make sure memory management is done correctly
	virtual ~Chain() {}

	// link
	// links objects from Chain & its derived classes
	void link(Chain *n)
	{
		if (next) { next->link(n); }
		else { next = n; }
	}

	// handle
	// takes string through chain so it can be handled
	// overidden in derived classes
	virtual void handle(string str) // go to next in chain
	{ next->handle(str); }
};

#endif
