// IntroToCpp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Person.h"
using namespace std;

// Classes and Objects
// Scope


int main()
{
	Person P1("P1", "", 123);
	{
		Person P2("P2", "", 999);
	}

    return 0;
}

