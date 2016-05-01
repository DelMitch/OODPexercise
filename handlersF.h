// handlersF.h
// Addeline Mitchell
// 1 May 2016
//
// For CS 372 Spring 2016, Assn 4 Exercise A
// Header file for first name chain


#ifndef HANDLERSF_H
#define HANDLERSF_H


#include "chain.h"


/******************************************************************
 * The 26 classes, one for each letter of the English alphabet,   *
 * each contain only a single member function that overrides the  *
 * virtual function 'handle' from the Chain class.                *
 *                                                                *
 * Each of the 'handle' functions in the classes below check the  *
 * string passed to it for a specific letter. If the criteria is  *
 * met, the first name of a Name object is set to a predetermined *
 * value. Otherwise, the string is sent to the next in the chain. *
 *                                                                *
 * If string is not handled, the user will be notified of invalid *
 * input and the program will exit the chain. (User will be asked *
 * for new input and the program will re-enter the chain. This    *
 * continues until the user-inputted string is handled.)          *
 ******************************************************************/

class aHandlerF : public Chain
{
public:
	void handle(string str)
	{
		if (str[0] == 'a' || str[0] == 'A')
		{ nom.setFName("Dusk"); }
		else
		{ Chain::handle(str); }
	}
};

class bHandlerF : public Chain
{
public:
	void handle(string str)
	{
		if (str[0] == 'b' || str[0] == 'B')
		{ nom.setFName("Angelic"); }
		else
		{ Chain::handle(str); }
	}
};

class cHandlerF : public Chain
{
public:
	void handle(string str)
	{
		if (str[0] == 'c' || str[0] == 'C')
		{ nom.setFName("White"); }
		else
		{ Chain::handle(str); }
	}
};

class dHandlerF : public Chain
{
public:
	void handle(string str)
	{
		if (str[0] == 'd' || str[0] == 'D')
		{ nom.setFName("Sun"); }
		else
		{ Chain::handle(str); }
	}
};

class eHandlerF : public Chain
{
public:
	void handle(string str)
	{
		if (str[0] == 'e' || str[0] == 'E')
		{ nom.setFName("Day"); }
		else
		{ Chain::handle(str); }
	}
};

class fHandlerF : public Chain
{
public:
	void handle(string str)
	{
		if (str[0] == 'f' || str[0] == 'F')
		{ nom.setFName("Awesome"); }
		else
		{ Chain::handle(str); }
	}
};

class gHandlerF : public Chain
{
public:
	void handle(string str)
	{
		if (str[0] == 'g' || str[0] == 'G')
		{ nom.setFName("Brilliant"); }
		else
		{ Chain::handle(str); }
	}
};

class hHandlerF : public Chain
{
public:
	void handle(string str)
	{
		if (str[0] == 'h' || str[0] == 'H')
		{ nom.setFName("Little"); }
		else
		{ Chain::handle(str); }
	}
};

class iHandlerF : public Chain
{
public:
	void handle(string str)
	{
		if (str[0] == 'i' || str[0] == 'I')
		{ nom.setFName("Weird"); }
		else
		{ Chain::handle(str); }
	}
};

class jHandlerF : public Chain
{
public:
	void handle(string str)
	{
		if (str[0] == 'j' || str[0] == 'J')
		{ nom.setFName("Moon"); }
		else
		{ Chain::handle(str); }
	}
};

class kHandlerF : public Chain
{
public:
	void handle(string str)
	{
		if (str[0] == 'k' || str[0] == 'K')
		{ nom.setFName("Sweet"); }
		else
		{ Chain::handle(str); }
	}
};

class lHandlerF : public Chain
{
public:
	void handle(string str)
	{
		if (str[0] == 'l' || str[0] == 'L')
		{ nom.setFName("Curious"); }
		else
		{ Chain::handle(str); }
	}
};

class mHandlerF : public Chain
{
public:
	void handle(string str)
	{
		if (str[0] == 'm' || str[0] == 'M')
		{ nom.setFName("Vigilant"); }
		else
		{ Chain::handle(str); }
	}
};

class nHandlerF : public Chain
{
public:
	void handle(string str)
	{
		if (str[0] == 'n' || str[0] == 'N')
		{ nom.setFName("Patient"); }
		else
		{ Chain::handle(str); }
	}
};

class oHandlerF : public Chain
{
public:
	void handle(string str)
	{
		if (str[0] == 'o' || str[0] == 'O')
		{ nom.setFName("Brave"); }
		else
		{ Chain::handle(str); }
	}
};

class pHandlerF : public Chain
{
public:
	void handle(string str)
	{
		if (str[0] == 'p' || str[0] == 'P')
		{ nom.setFName("Star"); }
		else
		{ Chain::handle(str); }
	}
};

class qHandlerF : public Chain
{
public:
	void handle(string str)
	{
		if (str[0] == 'q' || str[0] == 'Q')
		{ nom.setFName("Massive"); }
		else
		{ Chain::handle(str); }
	}
};

class rHandlerF : public Chain
{
public:
	void handle(string str)
	{
		if (str[0] == 'r' || str[0] == 'R')
		{ nom.setFName("Silent"); }
		else
		{ Chain::handle(str); }
	}
};

class sHandlerF : public Chain
{
public:
	void handle(string str)
	{
		if (str[0] == 's' || str[0] == 'S')
		{ nom.setFName("Adventurous"); }
		else
		{ Chain::handle(str); }
	}
};

class tHandlerF : public Chain
{
public:
	void handle(string str)
	{
		if (str[0] == 't' || str[0] == 'T')
		{ nom.setFName("Night"); }
		else
		{ Chain::handle(str); }
	}
};

class uHandlerF : public Chain
{
public:
	void handle(string str)
	{
		if (str[0] == 'u' || str[0] == 'U')
		{ nom.setFName("Light"); }
		else
		{ Chain::handle(str); }
	}
};

class vHandlerF : public Chain
{
public:
	void handle(string str)
	{
		if (str[0] == 'v' || str[0] == 'V')
		{ nom.setFName("Dark"); }
		else
		{ Chain::handle(str); }
	}
};

class wHandlerF : public Chain
{
public:
	void handle(string str)
	{
		if (str[0] == 'w' || str[0] == 'W')
		{ nom.setFName("Strong"); }
		else
		{ Chain::handle(str); }
	}
};

class xHandlerF : public Chain
{
public:
	void handle(string str)
	{
		if (str[0] == 'x' || str[0] == 'X')
		{ nom.setFName("Sharp"); }
		else
		{ Chain::handle(str); }
	}
};

class yHandlerF : public Chain
{
public:
	void handle(string str)
	{
		if (str[0] == 'y' || str[0] == 'Y')
		{ nom.setFName("Clever"); }
		else
		{ Chain::handle(str); }
	}
};

class zHandlerF : public Chain
{
public:
	void handle(string str)
	{
		if (str[0] == 'z' || str[0] == 'Z')
		{ nom.setFName("Fierce"); }
		else
		{ Chain::handle(str); }
	}
};

class endHandlerF : public Chain // for unhandled input
{ // you'd have to use a foreign keyboard to ever get here
public:
	void handle(string str)
	{ cout << "\nThat is not an English letter; Try Again\n" << endl; }
};

#endif