#include "stdafx.h"
#include "Tweeter.h"
#include <iostream>

Tweeter::Tweeter(std::string FirstNameToSet, std::string LastNameToSet, 
	int ArbitraryNumberToSet, std::string TwitterHandleToSet) :
	Person(FirstNameToSet, LastNameToSet, ArbitraryNumberToSet), TwitterHandle(TwitterHandleToSet)
{
	//std::cout << "Constructing Tweeter" << TwitterHandle << std::endl;
}

Tweeter::~Tweeter()
{
	//std::cout << "Destructing Tweeter" << TwitterHandle << std::endl;
}

std::string Tweeter::GetName() const
{
	return Person::GetName() + " " + TwitterHandle;
}
