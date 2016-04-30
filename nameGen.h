// nameGen.h
// Addeline Mitchell
// 29 Apr 2016
//
// For CS 372 Spring 2016, Assn 4 Exercise A
// Header file for nameGen class


#ifndef NAMEGEN_H
#define NAMEGEN_H


#include <cstdlib>

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;
using std::getline;


class Name
{
public:
	Name()
	{
		firstN = "empty";
		lastN = "empty";
		color = "empty";
	}

	string getFName() { return firstN; }
	void setFName(string str) { firstN = str; }

	string getLName() { return lastN; }
	void setLName(string str) { lastN = str; }

	string getColor() { return color; }
	void setColor(string str) { color = str; }

	void firstName();
	void lastName();
	void shirtColor();

	void formName();

protected:
	string firstN, lastN, color;
};

Name nom; // global obj

#endif