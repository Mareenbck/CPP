#include "Account.hpp"
#include <iostream>
#include <iomanip>

int Account::_nbAccounts = 0;

int Account::_totalNbWithdrawals = 0;

int Account::_totalNbDeposits = 0;

int Account::_totalAmount = 0;

Account::Account(int initial_deposit)
{
	this->_accountIndex += this->_nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits =  0;
	this->_nbWithdrawals = 0;
	Account::_totalAmount += initial_deposit;
	Account::_nbAccounts++;
	return;
}

Account::~Account(void)
{
	// Account::_displayTimestamp();
	Account::_nbAccounts--;
	return;
}

void Account::_displayTimestamp(void)
{
	time_t now;

	now = time(NULL);
	std::cout << std::put_time(localtime(&now), "[%Y%m%d_%H%M%S] ");
}

void Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->checkAmount();
	std::cout << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

int Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
	//print
}

void Account::makeDeposit(int deposit)
{
	this->_nbDeposits++;
	this->_amount += deposit;
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;
}

bool Account::makeWithdrawal(int withdrawal)
{
	this->_nbWithdrawals++;
	this->_amount -= withdrawal;
	Account::_totalNbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	return true;
}

int Account::checkAmount(void) const
{
	return (this->_amount);
}

// void Account::displayStatus(void) const
// {
// 	return;
// }
