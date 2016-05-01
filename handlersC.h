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
		if (str == "red")
		{ nom.setColor("the Panda"); }
		else
		{ Chain::handle(str); }
	}
};

class orangeHandlerC : public Chain // orange
{
public:
	void handle(string str)
	{
		if (str == "orange")
		{ nom.setColor("the Llama"); }
		else
		{ Chain::handle(str); }
	}
};

class yellowHandlerC : public Chain // yellow
{
public:
	void handle(string str)
	{
		if (str == "yellow")
		{ nom.setColor("the Rabbit"); }
		else
		{ Chain::handle(str); }
	}
};

class greenHandlerC : public Chain // green
{
public:
	void handle(string str)
	{
		if (str == "green")
		{ nom.setColor("the Grizzly Bear"); }
		else
		{ Chain::handle(str); }
	}
};

class blueHandlerC : public Chain // blue
{
public:
	void handle(string str)
	{
		if (str == "blue")
		{ nom.setColor("the Falcon"); }
		else
		{ Chain::handle(str); }
	}
};

class purpleHandlerC : public Chain // purple
{
public:
	void handle(string str)
	{
		if (str == "purple")
		{ nom.setColor("the Serpent"); }
		else
		{ Chain::handle(str); }
	}
};

class pinkHandlerC : public Chain // pink
{
public:
	void handle(string str)
	{
		if (str == "pink")
		{ nom.setColor("the Elephant"); }
		else
		{ Chain::handle(str); }
	}
};

class brownHandlerC : public Chain // brown
{
public:
	void handle(string str)
	{
		if (str == "brown")
		{ nom.setColor("the Fox"); }
		else
		{ Chain::handle(str); }
	}
};

class whiteHandlerC : public Chain // white
{
public:
	void handle(string str)
	{
		if (str == "white")
		{ nom.setColor("the Wolf"); }
		else
		{ Chain::handle(str); }
	}
};

class greyHandlerC : public Chain // grey
{
public:
	void handle(string str)
	{
		if (str == "grey" || str == "gray") // both spellings are valid
		{ nom.setColor("the Lion"); }
		else
		{ Chain::handle(str); }
	}
};

class blackHandlerC : public Chain // black
{
public:
	void handle(string str)
	{
		if (str == "black")
		{ nom.setColor("the Tiger"); }
		else
		{ Chain::handle(str); }
	}
};

class endHandlerC : public Chain // for unhandled input
{
public:
	void handle(string str)
	{
		cout << "\n\nThat is not a color; Try Again\n" << endl;
		Name::shirtColor();
	}
};

#endif