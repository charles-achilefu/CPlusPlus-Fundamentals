#pragma once
#include "Person.h"
#include <string>

class Tweeter : public Person
{

public:

	Tweeter(std::string FirstNameToSet, std::string LastNameToSet, 
		int ArbitraryNumberToSet, std::string TwitterHandleToSet);
	~Tweeter();

private:

	std::string TwitterHandle;

};

