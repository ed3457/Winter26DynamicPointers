#include "BankAccount.h"

void BankAccount::setClientName(string cn)
{
	clientName = cn;
}

string BankAccount::getClientName()
{
	return clientName;
}

void BankAccount::deposit(float a)
{   // TODO: add validation 
	balance += a; 
}

void BankAccount::withdraw(float a)
{
	if (a > balance)
		throw 1; 

	balance -= a; 

}

float BankAccount::getBalance()
{
	return balance;
}

BankAccount::BankAccount()
{

	balance = 500;
	setClientName("To be set");
}

BankAccount::BankAccount(string cn, float b)
{
	balance = b;
	setClientName(cn);

}
