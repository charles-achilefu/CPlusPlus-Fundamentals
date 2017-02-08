#include "stdafx.h"
#include "Person.h"
#include <iostream>

Person::Person(std::string FirstNameToSet, std::string LastNameToSet, int ArbitraryNumberToSet) :
	FirstName(FirstNameToSet), LastName(LastNameToSet), ArbitraryNumber(ArbitraryNumberToSet), pResource(nullptr)
{
	//std::cout << "Constructing " << FirstName << " " << LastName << std::endl;
}

Person::Person(const Person& p) :
	FirstName(p.FirstName), LastName(p.LastName), ArbitraryNumber(p.ArbitraryNumber),
	pResource(new Resource(p.pResource->GetName()))
{

}

Person& Person::operator=(const Person& p)
{
	FirstName = p.FirstName;
	LastName = p.LastName;
	ArbitraryNumber = p.ArbitraryNumber;

	// delete old pResource !!!
	delete pResource;

	pResource = new Resource(p.pResource->GetName());
	return *this;
}

Person::~Person()
{
	//std::cout << "Destructing " << FirstName << " " << LastName << std::endl;
	delete pResource; // no checking (nullptr initialization require)
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
	delete pResource;
	pResource = new Resource("Resource for " + GetName());
}

Person Person::operator+(Person& p)
{
	return Person("", "", ArbitraryNumber + p.GetNumber());
}

bool operator<(int Int, const Person& P)
{
	return Int < P.ArbitraryNumber;
}