// chain.h
// Addeline Mitchell
// 29 Apr 2016
//
// For CS 372 Spring 2016, Assn 4 Exercise A
// Header file for chain class


#ifndef CHAIN_H
#define CHAIN_H

#include "nameGen.h"

class Chain : public Name
{
protected:
	Chain *next;

public:
	Chain()
	{ next = nullptr; }

	void nxt(Chain *n)
	{
		if (next) { next->nxt(n); }
		else { next = n; }
	}

	virtual void handle(string str) // go to next in chain
	{ next->handle(str); }
};

#endif