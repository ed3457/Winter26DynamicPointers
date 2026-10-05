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
	virtual void withdraw(float a); // virtual turns on dynamic/late binding 

	float getBalance();

	BankAccount();
	BankAccount(string cn, float b); 

};

