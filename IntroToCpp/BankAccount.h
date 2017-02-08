#pragma once
#include <string>

class BankAccount
{

public:

	BankAccount();
	~BankAccount();

	std::string GetHolderName() { return "Not Implemented"; }

private:

	int BalanceInPennies;
	
	// TODO finish this class
};

