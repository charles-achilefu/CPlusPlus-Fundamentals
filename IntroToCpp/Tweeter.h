#pragma once
#include "Person.h"
#include <string>

class Tweeter : public Person
{

private:

	std::string TwitterHandle;

public:

	Tweeter(std::string FirstNameToSet, std::string LastNameToSet, 
		int ArbitraryNumberToSet, std::string TwitterHandleToSet);
	~Tweeter();
	std::string GetName() const;
};

