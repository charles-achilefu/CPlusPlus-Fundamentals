// IntroToCpp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Person.h"
#include "Tweeter.h"
#include "Status.h"
#include "BankAccount.h"
#include "Accum.h"
#include "Resource.h"
#include <memory>
using namespace std;

/**  
	- Classes and Objects
	- Scope
	- Tweeter
	- Enums
	- PreProcessor #pragma once
	- Flow Control
	- Errors
	- Operators
	- Operators Overloading

	- Templates
		- Template function
		- Template class
		- Template specializations

	- Pointers and memory management
		- pointer mistakes - delete to soon, delete twice, never delete
		- Rule of Three:
			- Copy Constructor
			- Copy Assignment Operator
			- Destructor

		- Easy memory management: (NO RULE OF THREE !!!)
			- smart pointers

	- Pointers and inheritance:
		- virtual
		- slicing (copy a derived object into a base object - extra member variables fall away)
			- use references or pointers to avoid slicing
		- cast operators
			- static_cast<type>		 - compile type
			- dynamic_cast<type>	 - runtime check, v table, nullptr if fail, slower but safer
			- const_cast<type>       - for casting away const
			- reinterpret_cast<type> - for bit twiddling

*/

template <class T>
T max(T& t1, T& t2)
{
	return t1 < t2 ? t2 : t1;
}


int main()
{
	
	Tweeter t("Kate", "Gregory", 123, "@tw");
	Person* p = &t;
	Tweeter* pt = static_cast<Tweeter*>(p);

	// bad idea to use (Tweeter*)
	// int i = 3;
	// Tweeter* pi = (Tweeter*)&i;
	// Tweeter* pi = static_cast<Tweeter*>(&i); // COMPILE TIME ERROR !
	// Tweeter* pi = dynamic_cast<Tweeter*>(&i); // COMPILE TIME ERROR ! int is not a user type 
	// cout << pi->GetName() << endl;

	//Resource f("local");
	//Tweeter* pi = dynamic_cast<Tweeter*>(&f); // COMPILE TIME ERROR ! is not a polymorphic type
	//cout << pi->GetName() << endl;

	cout << pt->GetName() << endl;
	
    return 0;
}

