// Winter26DynamicPointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "BankAccount.h"
#include "SavingsAccount.h"
using namespace std; 
int main()
{
	BankAccount* ba1 = new BankAccount("Steve Jobs",10000000);

	SavingsAccount* sa = new SavingsAccount("Steve Jobs",700000, 0.07);

	//BankAccount* ba2 = sa; // is-a , a savings account is a bank account 


	BankAccount** portfolio = new BankAccount * [3];

	portfolio[0] = ba1;

	portfolio[1] = sa; 

	portfolio[2] = new SavingsAccount("Steve Jobs", 50000, 0.04);


	for (int i = 0; i < 3; i++)
	{
		portfolio[i]->withdraw(50);

	}

	for (int i = 0; i < 3; i++)
	{
		cout<<portfolio[i]->getBalance() << endl;

	}

}

