// handlersL.h
// Addeline Mitchell
// 29 Apr 2016
//
// For CS 372 Spring 2016, Assn 4 Exercise A
// Header file for last name chain


#ifndef HANDLERSL_H
#define HANDLERSL_H

#include "chain.h"

class aHandlerL : public Chain
{
public:
	void handle(string str)
	{
		if (str[0] == 'a' || str[0] == 'A')
		{ nom.setLName("Alphonse"); }
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
		{ nom.setLName("Bartholome"); }
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
		{ nom.setLName("Carmichael"); }
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
		{ nom.setLName("Diaval"); }
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
		{ nom.setLName("Elliot"); }
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
		{ nom.setLName("Forsythe"); }
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
		{ nom.setLName("George"); }
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
		{ nom.setLName("Halland"); }
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
		{ nom.setLName("Isolde"); }
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
		{ nom.setLName("Jerome"); }
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
		{ nom.setLName("Kristoff"); }
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
		{ nom.setLName("Lionel"); }
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
		{ nom.setLName("Micah"); }
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
		{ nom.setLName("Niall"); }
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
		{ nom.setLName("Ozmond"); }
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
		{ nom.setLName("Peter"); }
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
		{ nom.setLName("Quentin"); }
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
		{ nom.setLName("Reinard"); }
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
		{ nom.setLName("Sullivan"); }
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
		{ nom.setLName("Theo"); }
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
		{ nom.setLName("Uriel"); }
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
		{ nom.setLName("Vikas"); }
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
		{ nom.setLName("Warren"); }
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
		{ nom.setLName("Xavier"); }
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
		{ nom.setLName("Yurik"); }
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
		{ nom.setLName("Zander"); }
		else
		{ cout << "\n\nINVALID\n\n" << endl; } // no more letters in alphabet
	}
};

#endif