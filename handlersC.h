// handlersC.h
// Addeline Mitchell
// 29 Apr 2016
//
// For CS 372 Spring 2016, Assn 4 Exercise A
// Header file for color chain


#ifndef HANDLERSC_H
#define HANDLERSC_H

#include "chain.h"

class redHandlerC : public Chain // red
{
public:
	void handle(string str)
	{
		if (str[0] == 'r' || str[0] == 'R')
		{ nom.setColor("Red"); }
		else
		{ Chain::handle(str); }
	}
};

class orangeHandlerC : public Chain // orange
{
public:
	void handle(string str)
	{
		if (str[0] == 'o' || str[0] == 'O')
		{ nom.setColor("Orange"); }
		else
		{ Chain::handle(str); }
	}
};

class yellowHandlerC : public Chain // yellow
{
public:
	void handle(string str)
	{
		if (str[0] == 'y' || str[0] == 'Y')
		{ nom.setColor("Yellow"); }
		else
		{ Chain::handle(str); }
	}
};

class greenHandlerC : public Chain // green
{
public:
	void handle(string str)
	{
		if (str[0] == 'g' || str[0] == 'D')
		{ nom.setColor("Green"); }
		else
		{ Chain::handle(str); }
	}
};

class blueHandlerC : public Chain // blue
{
public:
	void handle(string str)
	{
		if (str[0] == 'b' || str[0] == 'B')
		{ nom.setColor("Blue"); }
		else
		{ Chain::handle(str); }
	}
};

class purpleHandlerC : public Chain // purple
{
public:
	void handle(string str)
	{
		if (str[0] == 'p' || str[0] == 'P')
		{ nom.setColor("Purple"); }
		else
		{ Chain::handle(str); }
	}
};

class pinkHandlerC : public Chain // pink
{
public:
	void handle(string str)
	{
		if (str[0] == 'i' || str[0] == 'I')
		{ nom.setColor("Pink"); }
		else
		{ Chain::handle(str); }
	}
};

class brownHandlerC : public Chain // brown
{
public:
	void handle(string str)
	{
		if (str[0] == 'n' || str[0] == 'N')
		{ nom.setColor("Brown"); }
		else
		{ Chain::handle(str); }
	}
};

class whiteHandlerC : public Chain // white
{
public:
	void handle(string str)
	{
		if (str[0] == 'w' || str[0] == 'W')
		{ nom.setColor("White"); }
		else
		{ Chain::handle(str); }
	}
};

class greyHandlerC : public Chain // grey
{
public:
	void handle(string str)
	{
		if (str[0] == 'e' || str[0] == 'E')
		{ nom.setColor("Grey"); }
		else
		{ Chain::handle(str); }
	}
};

class blackHandlerC : public Chain // black
{
public:
	void handle(string str)
	{
		if (str[0] == 'l' || str[0] == 'L')
		{ nom.setColor("Black"); }
		else
		{ Chain::handle(str); }
	}
};

#endif