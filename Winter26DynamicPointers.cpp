// Winter26DynamicPointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "BankAccount.h"
#include "SavingsAccount.h"
using namespace std; 
int main()
{
	BankAccount* ba1 = new BankAccount("Steve Jobs",5000);

	SavingsAccount* sa = new SavingsAccount("Steve Jobs",5000, 0.07);

	/*sa->withdraw(1000);

	cout << sa->getBalance() << endl;*/

	//BankAccount* ba2 = sa; // is-a , a savings account is a bank account 


	BankAccount*    *portfolio = new BankAccount* [3];

	portfolio[0] = ba1;

	portfolio[1] = sa; 

	portfolio[2] = new SavingsAccount("Steve Jobs", 5000, 0.04);

	// change the 3rd account into a regular bank account 
	delete portfolio[2];
	portfolio[2] = new BankAccount("Steve Jobs", 5000);



	for (int i = 0; i < 3; i++)
	{
		portfolio[i]->withdraw(50);

	}

	for (int i = 0; i < 3; i++)
	{
		cout<<portfolio[i]->getBalance() << endl;

	}


	// clean up memory 
	for (int i = 0; i < 3; i++)
	{
		delete portfolio[i];

	}
	delete[] portfolio;

}

