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
	Resource* pResource;

public:

	Person(std::string FirstNameToSet, std::string LastNameToSet, int ArbitraryNumberToSet);
	Person(const Person& p);
	Person& operator=(const Person& p);
	~Person();

	std::string GetName() const { return FirstName + " " + LastName; }
	int GetNumber() const { return ArbitraryNumber; }
	void SetNumber(int NumberToSet) { ArbitraryNumber = NumberToSet; }
	void SetFirstName(std::string FirstNameToSet) { FirstName = FirstNameToSet; }

	bool operator<(const Person& P) const;
	bool operator<(int Int) const;
	Person operator+(Person& P);
	friend bool operator<(int Int, const Person& P);
	void AddResource();


	
};

