#include "BankAccount.h"
#include <iostream>
using namespace std; 
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
	if (a > 0)
		balance += a;
	else
		throw 2; // raise exception 
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
