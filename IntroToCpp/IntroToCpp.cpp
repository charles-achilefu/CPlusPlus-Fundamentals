// IntroToCpp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Person.h"
#include "Tweeter.h"
#include "Status.h"
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

*/



int main()
{
	Person P1("Kate", "Gregory", 123);
	
	Person P2("Someone", "Else", 456);
	
	cout << "p1 is ";
	if (!(P1 < P2))
	{
		cout << "not ";
	}
	cout << "less then p2" << endl;

	
	cout << "p1 is ";
	if (!(P1 < 300))
	{ 
		cout << "not ";
	}
	cout << "less then 300" << endl;
	
	cout << "300 is ";
	if (!(300 < P1))
	{
		cout << "not ";
	}
	cout << "less then p1" << endl;
	
    return 0;
}

