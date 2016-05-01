// nameGen.h
// Addeline Mitchell
// 1 May 2016
//
// For CS 372 Spring 2016, Assn 4 Exercise A
// Header file for nameGen class


#ifndef NAMEGEN_H
#define NAMEGEN_H


#include <cstdlib>

#include <algorithm>
using std::transform;

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;
using std::getline;


// Name
// this class is used for the construction of Name objects
// and contains functions that can act on those objects
class Name
{
public:
	// default ctor
	Name()
	{
		firstN = "none";
		lastN = "none";
		color = "none";
	}

	// setFName, setLName, setColor
	// set the vars for first name, last name, & color, respectively
	void setFName(string str) { firstN = str; }
	void setLName(string str) { lastN = str; }
	void setColor(string str) { color = str; }

	// getFName, getLName, getColor
	// get the values for first name, last name, & color, respectively
	string getFName() { return firstN; }
	string getLName() { return lastN; }
	string getColor() { return color; }

	// firstName
	// documentation with implementation
	void firstName();

	// lastName
	// documentation with implementation
	void lastName();

	// shirtColor
	// documentation with implementation
	void shirtColor();

	// formName
	// documentation with implementation
	void formName();

protected:
	string firstN, lastN, color;
};

Name nom; // global obj

#endif