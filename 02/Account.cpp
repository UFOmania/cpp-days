#include "Account.hpp"
#include <ctime>
#include <iostream>

int	Account::_nbAccounts;
int	Account::_totalAmount;
int	Account::_totalNbDeposits;
int	Account::_totalNbWithdrawals;

int	Account::getNbAccounts( void ) {return _nbAccounts;}
int	Account::getTotalAmount( void ) {return _totalAmount;}
int	Account::getNbDeposits( void ) {return _totalNbDeposits;}
int	Account::getNbWithdrawals( void ) {return _totalNbWithdrawals;}

Account::Account(int initial_deposit)
{
	_displayTimestamp();
	_accountIndex = _nbAccounts++;
	_amount = initial_deposit;
	_totalAmount += _amount;
	_nbDeposits = _nbWithdrawals = _totalNbDeposits = _totalNbWithdrawals = 0;

	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "created" << std::endl;
}
Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "closed" << std::endl;
}

int		Account::checkAmount(void) const
{
	return (_amount);
}
void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << checkAmount() << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals << ";";
	std::cout << std::endl;
}

// [19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0
// [19920104_091532] index:0;amount:42;deposits:0;withdrawals:0
void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals();
	std::cout << std::endl;
}
//index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	std::cout << "deposit:" << deposit << ";";
	_amount += deposit;
	_nbDeposits++;
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposit:" << _nbDeposits << ";";
	std::cout << std::endl;
	_totalNbDeposits++;
	_totalAmount += deposit; 
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	std::cout << "withdrawal:";
	if (_amount - withdrawal < 0)
	{
		std::cout << "refused\n";
		return (false);
	}
	_amount -= withdrawal;
	_nbWithdrawals++;
	std::cout << withdrawal << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "nb_withdrawals:" << _nbWithdrawals << ";";
	std::cout << std::endl;
	_totalNbWithdrawals++;
	_totalAmount -= withdrawal;
	return (true);
}

void	Account::_displayTimestamp( void )
{
	time_t t = std::time(0);
	std::tm *current = std::localtime(&t);

	std::cout << '[';
	
	std::cout << 1900 + current->tm_year;

	if (current->tm_mon < 10)
		std::cout << '0';
	std::cout << current->tm_mon;

	if (current->tm_mday < 10)
		std::cout << '0';
	std::cout << current->tm_mday;
	
	std::cout << '_';

	if (current->tm_hour < 10)
		std::cout << '0';
	std::cout << current->tm_hour;

	if (current->tm_min < 10)
		std::cout << '0';
	std::cout << current->tm_min;

	if (current->tm_sec < 10)
		std::cout << '0';
	std::cout << current->tm_sec;

	std::cout << "] ";
}
