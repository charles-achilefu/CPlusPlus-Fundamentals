#pragma once
#include <string>

class Person
{

public:

	Person(std::string FirstNameToSet, std::string LastNameToSet, int ArbitraryNumberToSet);
	~Person();

	std::string GetName() { return FirstName + " " + LastName; }
	int GetNumber() { return ArbitraryNumber; }
	void SetNumber(int NumberToSet) { ArbitraryNumber = NumberToSet; }

	bool operator<(Person& P);
	bool operator<(int Int);

	friend bool operator<(int Int, Person& P);
	

private:
	 
	std::string FirstName;
	std::string LastName;
	int ArbitraryNumber;
	
};

