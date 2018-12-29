#include "pch.h"
#include "Bank.h"


Bank::Bank()
{
}

void Bank::show()
{
	cout << "Land : " << _land << "\t";
	cout << "management fees : " << _manFees << "\t";
	cout << "allowance rates : " << _rateAllowance << "\t";
	cout << "allowance max : " << _maxAllowance << "\t";
	cout << "Max repay delay : " << _MRD << "\t";

}


Bank::~Bank()
{
}
