#pragma once
#include <string>
#include <memory>
#include "Resource.h"


class Person
{

private:

	std::string FirstName;
	std::string LastName;
	int ArbitraryNumber;
	
public:

	Person(std::string FirstNameToSet, std::string LastNameToSet, int ArbitraryNumberToSet);
	virtual ~Person();
	virtual std::string GetName() const { return FirstName + " " + LastName; }
	void SetNumber(int NumberToSet) { ArbitraryNumber = NumberToSet; }
	void SetFirstName(std::string FirstNameToSet) { FirstName = FirstNameToSet; }
	
};

