#pragma once
#include <string>
using namespace std; 

class BankAccount
{

private:
	float balance; 
	string clientName;

public:

	void setClientName(string cn);
	string getClientName();

	void deposit(float a); 
	void withdraw(float a); 

	float getBalance();

	BankAccount();
	BankAccount(string cn, float b); 

};

