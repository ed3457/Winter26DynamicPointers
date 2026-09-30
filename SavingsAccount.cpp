#include "SavingsAccount.h"

void SavingsAccount::setInterestRate(float ir)
{
	interestRate = ir;
}

float SavingsAccount::getInterestRate()
{
	return interestRate;
}

SavingsAccount::SavingsAccount()
{
	setInterestRate(0.02);

}

SavingsAccount::SavingsAccount(string cn, float b, float ir):BankAccount(cn,b)
{
	setInterestRate(ir);

}
