#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <chrono>

/* Init static variables of Account class */

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

/* Constructor and Destructor functions */

Account::Account(int initial_deposit) : _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	_nbAccounts++;
	_totalAmount += _amount;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			<< ";amount:" << _amount
			<< ";created" << std::endl;
	return ;
}

Account::~Account(void)
{
	_nbAccounts--;
	_totalAmount -= _amount;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			<< ";amount:" << _amount
			<< ";closed" << std::endl;
	return ;
}

/* Get functions */

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

/* Check functions */

int		Account::checkAmount(void) const
{
	return (_amount);
}

/* Make functions */

void	Account::makeDeposit(int deposit)
{
	if (deposit <= 0)
		return ;

	_amount += deposit;
	_totalAmount += deposit;
	_totalNbDeposits++;
	_nbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			<< ";p_amount" << (_amount - deposit)
			<< ";deposit:" << deposit
			<< ";amount:" << _amount
			<< ";nb_deposits:" << _nbDeposits
			<< std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	if (checkAmount() < withdrawal) {
		_displayTimestamp();
		std::cout << "index:" << _accountIndex
			<< ";p_amount" << (_amount + withdrawal)
			<< ";withdrawals:refused"
			<< std::endl;
		return (false);
	}
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	_nbWithdrawals++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			<< ";p_amount" << (_amount + withdrawal)
			<< ";withdrawals:" << withdrawal
			<< ";amount:" << _amount
			<< ";nb_deposits:" << _nbWithdrawals
			<< std::endl;
	return (true);
}

/* Display functions */

void	Account::_displayTimestamp(void)
{
	std::time_t	now;
	std::string	s(30, '\0');
	
	now = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
	std::strftime(&s[0], s.size(), "%Y%m%d %H%M%S", std::localtime(&now));
	std::cout << "[" << s << "] ";
}


void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts
			<< ";total:" << _totalAmount
			<< ";deposits:" << _totalNbDeposits
			<< ";withdrawals:" << _totalNbWithdrawals
			<< std::endl;  
	return ;
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			<< ";amount:" << _amount
			<< ";deposits:" << _nbDeposits
			<< ";withdrawals:" << _nbWithdrawals
			<< std::endl; 
	return ;
}