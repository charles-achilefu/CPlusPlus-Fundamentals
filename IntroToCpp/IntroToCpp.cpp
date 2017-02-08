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

*/

template <class T>
T max(T& t1, T& t2)
{
	return t1 < t2 ? t2 : t1;
}


int main()
{
	Person Kate("Kate", "Gregory", 345);
	Kate.AddResource();
	Kate.SetFirstName("Kate2");
	Kate.AddResource();
	//
	Person Kate2 = Kate;
	Kate = Kate2;

	std::string s1 = Kate.GetResourceName();
	cout << endl;
	cout << s1 << endl;
	cout << endl;
    return 0;
}

