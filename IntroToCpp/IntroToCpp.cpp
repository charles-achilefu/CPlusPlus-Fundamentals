// IntroToCpp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Person.h"
#include "Tweeter.h"
using namespace std;

// Classes and Objects
// Scope
// Tweeter


int main()
{
	Person P1("P1", "", 123);
	{
		Person P2("P2", "", 999);
	}

	Tweeter("T1", "", 123, "tweeter");

    return 0;
}

