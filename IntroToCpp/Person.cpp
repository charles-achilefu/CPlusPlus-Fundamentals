#include "stdafx.h"
#include "Person.h"
#include <iostream>

Person::Person(std::string FirstNameToSet, std::string LastNameToSet, int ArbitraryNumberToSet) :
	FirstName(FirstNameToSet), LastName(LastNameToSet), ArbitraryNumber(ArbitraryNumberToSet)
{
	std::cout << "Constructing " << FirstName << " " << LastName << std::endl;
}

Person::~Person()
{
	std::cout << "Destructing " << FirstName << " " << LastName << std::endl;
}
