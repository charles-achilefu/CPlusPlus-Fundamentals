#include "stdafx.h"
#include "Person.h"
#include <iostream>

Person::Person(std::string FirstNameToSet, std::string LastNameToSet, int ArbitraryNumberToSet) :
	FirstName(FirstNameToSet), LastName(LastNameToSet), ArbitraryNumber(ArbitraryNumberToSet)
{
	//std::cout << "Constructing " << FirstName << " " << LastName << std::endl;
}

bool Person::operator<(const Person& P1) const
{
	return ArbitraryNumber < P1.ArbitraryNumber;
}

bool Person::operator<(int Int) const
{
	return ArbitraryNumber < Int;
}

void Person::AddResource()
{
	pResource.reset();
	pResource = std::make_shared<Resource>("Resource for " + GetName());
}

Person Person::operator+(Person& p)
{
	return Person("", "", ArbitraryNumber + p.GetNumber());
}

bool operator<(int Int, const Person& P)
{
	return Int < P.ArbitraryNumber;
}