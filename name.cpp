// name.cpp
// Addeline Mitchell
// 29 Apr 2016
//
// For CS 372 Spring 2016, Assn 4 Exercise A
// Source file for nameGen, chain, & handler header files


#include "handlersF.h"
#include "handlersL.h"
#include "handlersC.h"

void Name::firstName()
{
	aHandlerF root; // set up chain
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

	root.nxt(&b); // link chain together
	root.nxt(&c);
	root.nxt(&d);
	root.nxt(&e);
	root.nxt(&f);
	root.nxt(&g);
	root.nxt(&h);
	root.nxt(&i);
	root.nxt(&j);
	root.nxt(&k);
	root.nxt(&l);
	root.nxt(&m);
	root.nxt(&n);
	root.nxt(&o);
	root.nxt(&p);
	root.nxt(&q);
	root.nxt(&r);
	root.nxt(&s);
	root.nxt(&t);
	root.nxt(&u);
	root.nxt(&v);
	root.nxt(&w);
	root.nxt(&x);
	root.nxt(&y);
	root.nxt(&z);
	root.nxt(&end);

	bool leave = false;
	string str;

	do
	{
		cout << "First letter of Forename (A-Z): ";
		getline(cin, str);

		if (isalpha(str[0]))
		{
			cout << endl;
			root.handle(str); // first name handled
			leave = true;     // we can leave
		}
		else
		{ cout << "\n\nInvalid Input; Try Again\n" << endl; }
	} while (!leave);
}

void Name::lastName()
{
	aHandlerL root; // set up chain
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

	root.nxt(&b); // link chain together
	root.nxt(&c);
	root.nxt(&d);
	root.nxt(&e);
	root.nxt(&f);
	root.nxt(&g);
	root.nxt(&h);
	root.nxt(&i);
	root.nxt(&j);
	root.nxt(&k);
	root.nxt(&l);
	root.nxt(&m);
	root.nxt(&n);
	root.nxt(&o);
	root.nxt(&p);
	root.nxt(&q);
	root.nxt(&r);
	root.nxt(&s);
	root.nxt(&t);
	root.nxt(&u);
	root.nxt(&v);
	root.nxt(&w);
	root.nxt(&x);
	root.nxt(&y);
	root.nxt(&z);
	root.nxt(&end);

	bool leave = true;
	string str;

	do
	{
		cout << "First letter of Surname (A-Z): ";
		getline(cin, str);

		if (isalpha(str[0]))
		{
			cout << endl;
			root.handle(str); // last name handled
			leave = false;    // we can leave
		}
		else
		{ cout << "\n\nInvalid Input; Try Again\n" << endl; }
	} while (leave);
}

void Name::shirtColor()
{
	redHandlerC root; // set up chain
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

	root.nxt(&orange); // link chain together
	root.nxt(&yellow);
	root.nxt(&green);
	root.nxt(&blue);
	root.nxt(&purple);
	root.nxt(&pink);
	root.nxt(&brown);
	root.nxt(&white);
	root.nxt(&grey);
	root.nxt(&black);
	root.nxt(&end);

	bool leave = true;
	string str;

	do
	{
		cout << "Color options are:\n"
			 << "red   orange   yellow   green   blue   purple   pink   brown   white   grey   black\n" << endl;
		cout << "Current Shirt Color: ";
		getline(cin, str);

		if (isalpha(str[0]))
		{
			cout << endl;
			transform(str.begin(), str.end(), str.begin(), tolower);

			root.handle(str); // color handled
			leave = false;    // we can leave
		}
		else
		{ cout << "\n\nInvalid Input; Try Again\n" << endl; }
	} while (leave);
}

void Name::formName()
{
	firstName();
	lastName();
	shirtColor();

	cout << "\nYour [thing] Name is: " 
		 << getFName() << " "
		 << getLName() << " "
		 << getColor() << endl;
}

int main()
{
	bool leave = false;
	string ans;
	
	cout << "Welcome to the [thing] Name Generator!\n" << endl;

	do
	{
		nom.formName();

		cout << "\n\nGenerate another name? (Y or N): ";
		getline(cin, ans);

		if (ans[0] != 'y' && ans[0] != 'Y')
		{ leave = true; }

		cout << endl << endl;
	} while (!leave);

	return 0;
}