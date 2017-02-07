#pragma once
#include <string>


class Person
{

public:

	Person(std::string FirstNameToSet, std::string LastNameToSet, int ArbitraryNumberToSet);
	~Person();
private:
	 
	std::string FirstName;
	std::string LastName;
	int ArbitraryNumber;
	
};

