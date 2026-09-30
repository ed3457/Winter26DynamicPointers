// Winter26DynamicPointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "BankAccount.h"
using namespace std; 
int main()
{
	BankAccount* ba1 = new BankAccount("Steve Jobs",10000000);

	ba1->withdraw(2000000);

}

