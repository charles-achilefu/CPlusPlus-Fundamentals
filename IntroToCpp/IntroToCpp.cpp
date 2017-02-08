// IntroToCpp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Person.h"
#include "Tweeter.h"
#include "Status.h"
#include "BankAccount.h"
#include "Accum.h"
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
		= Template class
*/

template <class T>
T max(T& t1, T& t2)
{
	return t1 < t2 ? t2 : t1;
}


int main()
{
	int a = 33, b = 44;
	cout << "max of 33 and 44 is " << max(a, b) << endl;

	string s1 = "Hello";
	string s2 = "World";
	cout << "max of s1 and s2 is " << max(s1, s2) << endl;

 	Person p1("Kate", "Gregory", 123);
	Person p2("Someone", "Else", 456);
	cout << "max of p1 and p2 is " << max(p1, p2).GetName() << endl;

	Accum<int> integers(0);
	integers += 3;
	integers += 7;
	cout << integers.GetTotal() << endl;

	Accum<string> strings("");
	strings += "Hello";
	strings += " World";
	cout << strings.GetTotal() << endl;
	
    return 0;
}

