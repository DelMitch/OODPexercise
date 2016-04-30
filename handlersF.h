// handlersF.h
// Addeline Mitchell
// 29 Apr 2016
//
// For CS 372 Spring 2016, Assn 4 Exercise A
// Header file for first name chain


#ifndef HANDLERSF_H
#define HANDLERSF_H

#include "chain.h"

class aHandlerF : public Chain
{
public:
	void handle(string str)
	{
		if (str[0] == 'a' || str[0] == 'A')
		{ nom.setFName("Alphonse"); }
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
		{ nom.setFName("Bartholome"); }
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
		{ nom.setFName("Carmichael"); }
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
		{ nom.setFName("Diaval"); }
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
		{ nom.setFName("Elliot"); }
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
		{ nom.setFName("Forsythe"); }
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
		{ nom.setFName("George"); }
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
		{ nom.setFName("Halland"); }
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
		{ nom.setFName("Isolde"); }
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
		{ nom.setFName("Jerome"); }
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
		{ nom.setFName("Kristoff"); }
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
		{ nom.setFName("Lionel"); }
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
		{ nom.setFName("Micah"); }
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
		{ nom.setFName("Niall"); }
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
		{ nom.setFName("Ozmond"); }
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
		{ nom.setFName("Peter"); }
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
		{ nom.setFName("Quentin"); }
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
		{ nom.setFName("Reinard"); }
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
		{ nom.setFName("Sullivan"); }
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
		{ nom.setFName("Theo"); }
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
		{ nom.setFName("Uriel"); }
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
		{ nom.setFName("Vikas"); }
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
		{ nom.setFName("Warren"); }
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
		{ nom.setFName("Xavier"); }
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
		{ nom.setFName("Yurik"); }
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
		{ nom.setFName("Zander"); }
		else
		{ cout << "\n\nINVALID\n\n" << endl; } // no more letters in alphabet
	}
};

#endif