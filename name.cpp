// name.cpp
// Addeline Mitchell
// 1 May 2016
//
// For CS 372 Spring 2016, Assn 4 Exercise A
// Source file for nameGen, chain, & handler header files


#include "handlersF.h"
#include "handlersL.h"
#include "handlersC.h"


// firstName
// determines first part of generated name via chain
void Name::firstName()
{
	aHandlerF root;
	bHandlerF b;
	cHandlerF c;
	dHandlerF d;
	eHandlerF e;
	fHandlerF f;
	gHandlerF g;
	hHandlerF h;
	iHandlerF i;
	jHandlerF j;
	kHandlerF k;
	lHandlerF l;
	mHandlerF m;
	nHandlerF n;
	oHandlerF o;
	pHandlerF p;
	qHandlerF q;
	rHandlerF r;
	sHandlerF s;
	tHandlerF t;
	uHandlerF u;
	vHandlerF v;
	wHandlerF w;
	xHandlerF x;
	yHandlerF y;
	zHandlerF z;
	endHandlerF end;

	root.link(&b); // link chain together
	root.link(&c);
	root.link(&d);
	root.link(&e);
	root.link(&f);
	root.link(&g);
	root.link(&h);
	root.link(&i);
	root.link(&j);
	root.link(&k);
	root.link(&l);
	root.link(&m);
	root.link(&n);
	root.link(&o);
	root.link(&p);
	root.link(&q);
	root.link(&r);
	root.link(&s);
	root.link(&t);
	root.link(&u);
	root.link(&v);
	root.link(&w);
	root.link(&x);
	root.link(&y);
	root.link(&z);
	root.link(&end);

	string str;

	do
	{
		cout << "First letter of your Forename (A-Z): ";
		getline(cin, str);

		if (isalpha(str[0]))
		{
			cout << endl;
			root.handle(str); // enter first name chain
		}
		else
		{ cout << "\n\nInvalid Input; Try Again\n" << endl; }
	} while (Name::getFName() == "none"); // leave when name is set
}

// lastName
// determines second part of generated name via chain
void Name::lastName()
{
	aHandlerL root;
	bHandlerL b;
	cHandlerL c;
	dHandlerL d;
	eHandlerL e;
	fHandlerL f;
	gHandlerL g;
	hHandlerL h;
	iHandlerL i;
	jHandlerL j;
	kHandlerL k;
	lHandlerL l;
	mHandlerL m;
	nHandlerL n;
	oHandlerL o;
	pHandlerL p;
	qHandlerL q;
	rHandlerL r;
	sHandlerL s;
	tHandlerL t;
	uHandlerL u;
	vHandlerL v;
	wHandlerL w;
	xHandlerL x;
	yHandlerL y;
	zHandlerL z;
	endHandlerL end;

	root.link(&b); // link chain together
	root.link(&c);
	root.link(&d);
	root.link(&e);
	root.link(&f);
	root.link(&g);
	root.link(&h);
	root.link(&i);
	root.link(&j);
	root.link(&k);
	root.link(&l);
	root.link(&m);
	root.link(&n);
	root.link(&o);
	root.link(&p);
	root.link(&q);
	root.link(&r);
	root.link(&s);
	root.link(&t);
	root.link(&u);
	root.link(&v);
	root.link(&w);
	root.link(&x);
	root.link(&y);
	root.link(&z);
	root.link(&end);

	string str;

	do
	{
		cout << "First letter of your Surname (A-Z): ";
		getline(cin, str);

		if (isalpha(str[0]))
		{
			cout << endl;
			root.handle(str); // enter last name chain
		}
		else
		{ cout << "\n\nInvalid Input; Try Again\n" << endl; }
	} while (Name::getLName() == "none"); // leave when name is set
}

// shirtColor
// determines animal part of generated name via chain
void Name::shirtColor()
{
	redHandlerC root;
	orangeHandlerC orange;
	yellowHandlerC yellow;
	greenHandlerC green;
	blueHandlerC blue;
	purpleHandlerC purple;
	pinkHandlerC pink;
	brownHandlerC brown;
	whiteHandlerC white;
	greyHandlerC grey;
	blackHandlerC black;
	endHandlerC end;

	root.link(&orange); // link chain together
	root.link(&yellow);
	root.link(&green);
	root.link(&blue);
	root.link(&purple);
	root.link(&pink);
	root.link(&brown);
	root.link(&white);
	root.link(&grey);
	root.link(&black);
	root.link(&end);

	string str;

	do
	{
		cout << "Color options are:\n"
			 << "red   orange   yellow   green   blue   purple   pink   brown   white   grey   black\n" << endl;
		cout << "Your current Shirt Color: ";
		getline(cin, str);

		if (isalpha(str[0]))
		{
			cout << endl;
			transform(str.begin(), str.end(), str.begin(), tolower);
			root.handle(str); // enter color chain
		}
		else
		{ cout << "\n\nInvalid Input; Try Again\n" << endl; }
	} while (Name::getColor() == "none"); // leave when color is set
}

// formName
// produces the generated name
void Name::formName()
{
	firstName();  // process first name
	lastName();   // process last name
	shirtColor(); // process color

	cout << "\nYour Wild Animal Name is: "
		 << getFName() << " "
		 << getLName() << " "
		 << getColor() << endl;
}

// main
// allows the user to generate as many names as they like
// # of distinct names: 7436
int main()
{
	bool leave = false;
	string ans;
	
	cout << "Welcome to the Wild Animal Name Generator!\n" << endl;

	do
	{
		nom.formName(); // begin name generation process

		cout << "\n\nGenerate another name? (Y or N): ";
		getline(cin, ans);

		if (ans[0] != 'y' && ans[0] != 'Y')
		{ leave = true; }

		cout << endl << endl;
	} while (!leave);

	return 0;
}