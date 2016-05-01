// handlersL.h
// Addeline Mitchell
// 1 May 2016
//
// For CS 372 Spring 2016, Assn 4 Exercise A
// Header file for last name chain


#ifndef HANDLERSL_H
#define HANDLERSL_H


#include "chain.h"


/******************************************************************
 * The 26 classes, one for each letter of the English alphabet,   *
 * each contain only a single member function that overrides the  *
 * virtual function 'handle' from the Chain class.                *
 *                                                                *
 * Each of the 'handle' functions in the classes below check the  *
 * string passed to it for a specific letter. If the criteria is  *
 * met, the last name of a Name object is set to a predetermined  *
 * value. Otherwise, the string is sent to the next in the chain. *
 *                                                                *
 * If string is not handled, the user will be notified of invalid *
 * input and the program will exit the chain. (User will be asked *
 * for new input and the program will re-enter the chain. This    *
 * continues until the user-inputted string is handled.)          *
 ******************************************************************/

class aHandlerL : public Chain
{
public:
	void handle(string str)
	{
		if (str[0] == 'a' || str[0] == 'A')
		{ nom.setLName("Flower"); }
		else
		{ Chain::handle(str); }
	}
};

class bHandlerL : public Chain
{
public:
	void handle(string str)
	{
		if (str[0] == 'b' || str[0] == 'B')
		{ nom.setLName("Paw"); }
		else
		{ Chain::handle(str); }
	}
};

class cHandlerL : public Chain
{
public:
	void handle(string str)
	{
		if (str[0] == 'c' || str[0] == 'C')
		{ nom.setLName("Adventurer"); }
		else
		{ Chain::handle(str); }
	}
};

class dHandlerL : public Chain
{
public:
	void handle(string str)
	{
		if (str[0] == 'd' || str[0] == 'D')
		{ nom.setLName("Beast"); }
		else
		{ Chain::handle(str); }
	}
};

class eHandlerL : public Chain
{
public:
	void handle(string str)
	{
		if (str[0] == 'e' || str[0] == 'E')
		{ nom.setLName("Hollow"); }
		else
		{ Chain::handle(str); }
	}
};

class fHandlerL : public Chain
{
public:
	void handle(string str)
	{
		if (str[0] == 'f' || str[0] == 'F')
		{ nom.setLName("Child"); }
		else
		{ Chain::handle(str); }
	}
};

class gHandlerL : public Chain
{
public:
	void handle(string str)
	{
		if (str[0] == 'g' || str[0] == 'G')
		{ nom.setLName("Heart"); }
		else
		{ Chain::handle(str); }
	}
};

class hHandlerL : public Chain
{
public:
	void handle(string str)
	{
		if (str[0] == 'h' || str[0] == 'H')
		{ nom.setLName("Walker"); }
		else
		{ Chain::handle(str); }
	}
};

class iHandlerL : public Chain
{
public:
	void handle(string str)
	{
		if (str[0] == 'i' || str[0] == 'I')
		{ nom.setLName("Harbinger"); }
		else
		{ Chain::handle(str); }
	}
};

class jHandlerL : public Chain
{
public:
	void handle(string str)
	{
		if (str[0] == 'j' || str[0] == 'J')
		{ nom.setLName("Sky"); }
		else
		{ Chain::handle(str); }
	}
};

class kHandlerL : public Chain
{
public:
	void handle(string str)
	{
		if (str[0] == 'k' || str[0] == 'K')
		{ nom.setLName("Soldier"); }
		else
		{ Chain::handle(str); }
	}
};

class lHandlerL : public Chain
{
public:
	void handle(string str)
	{
		if (str[0] == 'l' || str[0] == 'L')
		{ nom.setLName("Wanderer"); }
		else
		{ Chain::handle(str); }
	}
};

class mHandlerL : public Chain
{
public:
	void handle(string str)
	{
		if (str[0] == 'm' || str[0] == 'M')
		{ nom.setLName("Hunter"); }
		else
		{ Chain::handle(str); }
	}
};

class nHandlerL : public Chain
{
public:
	void handle(string str)
	{
		if (str[0] == 'n' || str[0] == 'N')
		{ nom.setLName("Claw"); }
		else
		{ Chain::handle(str); }
	}
};

class oHandlerL : public Chain
{
public:
	void handle(string str)
	{
		if (str[0] == 'o' || str[0] == 'O')
		{ nom.setLName("Healer"); }
		else
		{ Chain::handle(str); }
	}
};

class pHandlerL : public Chain
{
public:
	void handle(string str)
	{
		if (str[0] == 'p' || str[0] == 'P')
		{ nom.setLName("Tail-Chaser"); }
		else
		{ Chain::handle(str); }
	}
};

class qHandlerL : public Chain
{
public:
	void handle(string str)
	{
		if (str[0] == 'q' || str[0] == 'Q')
		{ nom.setLName("Reaper"); }
		else
		{ Chain::handle(str); }
	}
};

class rHandlerL : public Chain
{
public:
	void handle(string str)
	{
		if (str[0] == 'r' || str[0] == 'R')
		{ nom.setLName("Seeker"); }
		else
		{ Chain::handle(str); }
	}
};

class sHandlerL : public Chain
{
public:
	void handle(string str)
	{
		if (str[0] == 's' || str[0] == 'S')
		{ nom.setLName("Moon"); }
		else
		{ Chain::handle(str); }
	}
};

class tHandlerL : public Chain
{
public:
	void handle(string str)
	{
		if (str[0] == 't' || str[0] == 'T')
		{ nom.setLName("Avenger"); }
		else
		{ Chain::handle(str); }
	}
};

class uHandlerL : public Chain
{
public:
	void handle(string str)
	{
		if (str[0] == 'u' || str[0] == 'U')
		{ nom.setLName("Stone"); }
		else
		{ Chain::handle(str); }
	}
};

class vHandlerL : public Chain
{
public:
	void handle(string str)
	{
		if (str[0] == 'v' || str[0] == 'V')
		{ nom.setLName("Thunder"); }
		else
		{ Chain::handle(str); }
	}
};

class wHandlerL : public Chain
{
public:
	void handle(string str)
	{
		if (str[0] == 'w' || str[0] == 'W')
		{ nom.setLName("Lightning"); }
		else
		{ Chain::handle(str); }
	}
};

class xHandlerL : public Chain
{
public:
	void handle(string str)
	{
		if (str[0] == 'x' || str[0] == 'X')
		{ nom.setLName("Fang"); }
		else
		{ Chain::handle(str); }
	}
};

class yHandlerL : public Chain
{
public:
	void handle(string str)
	{
		if (str[0] == 'y' || str[0] == 'Y')
		{ nom.setLName("Shadow"); }
		else
		{ Chain::handle(str); }
	}
};

class zHandlerL : public Chain
{
public:
	void handle(string str)
	{
		if (str[0] == 'z' || str[0] == 'Z')
		{ nom.setLName("Scavenger"); }
		else
		{ Chain::handle(str); }
	}
};

class endHandlerL : public Chain // for unhandled input
{ // you'd have to use a foreign keyboard to ever get here
public:
	void handle(string str)
	{ cout << "\nThat is not an English letter; Try Again\n" << endl; }
};

#endif