#include "stdafx.h"
#include "Person.h"
#include <iostream>

Person::Person(std::string FirstNameToSet, std::string LastNameToSet, int ArbitraryNumberToSet) :
	FirstName(FirstNameToSet), LastName(LastNameToSet), ArbitraryNumber(ArbitraryNumberToSet)
{
	//std::cout << "Constructing " << FirstName << " " << LastName << std::endl;
}

Person::~Person()
{
	//std::cout << "Destructing " << FirstName << " " << LastName << std::endl;
}

bool Person::operator<(Person& P1)
{
	return ArbitraryNumber < P1.ArbitraryNumber;
}

bool Person::operator<(int Int)
{
	return ArbitraryNumber < Int;
}


Person Person::operator+(Person& p)
{
	return Person("", "", ArbitraryNumber + p.GetNumber());
}

bool operator<(int Int, Person& P)
{
	return Int < P.ArbitraryNumber;
}