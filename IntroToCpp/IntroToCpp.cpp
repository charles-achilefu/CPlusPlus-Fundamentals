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
	
	Person* Kate = new Person("Kate", "Gregory", 456);
	Tweeter* KateGregons = new Tweeter("Kate", "Gregory", 567, "@gregcons");

	Person* pKateGregCons = KateGregons;

	cout << Kate->GetName() << endl;
	cout << KateGregons->GetName() << endl;
	cout << pKateGregCons->GetName() << endl;

	delete KateGregons;

	std::shared_ptr<Person> spKate = std::make_shared<Tweeter>("SKate", "PGregory", 456, "@twetter");
	cout << spKate->GetName() << endl;

	// slicing example
	Person LocalP("Local", "Person", 333);
	//Tweeter LocalT = LocalP;
	Tweeter LocalT2("Local", "Tweeter", 444, "@local");

	Person& LocalP2 = LocalT2; // or std::shared_ptr<>
	cout << LocalP2.GetName() << endl;
	
    return 0;
}

