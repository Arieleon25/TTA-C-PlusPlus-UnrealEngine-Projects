#pragma once
#include <vector>
#include <string>
#include "Transaction.h"

class Account
{
private:
	int balance;
	vector<Transaction> log;
public:
	Account();
	vector<string> Report();
	bool Deposit(int amount);
	bool Withdraw(int amount);
	int GetBalance() { return balance; }

};

