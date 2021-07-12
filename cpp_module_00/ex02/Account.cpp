#include "Account.hpp"

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
	return ;
}

Account::~Account(void)
{
	_nbAccounts--;
	_totalAmount -= _amount;
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
	return (_totalAmount);
}

/* Make functions */

void	Account::makeDeposit(int deposit)
{
	if (deposit > 0)
		return ;
	_amount += deposit;
	_totalAmount += _amount;
	_totalNbDeposits++;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	if (_amount >= withdrawal)
		return (false);
	_amount -= withdrawal;
	_totalAmount -= _amount;
	_totalNbWithdrawals++;
	return (true);
}

/* Display functions */

void	Account::displayAccountsInfos( void )
{
	return ;
}

void	Account::displayStatus(void) const
{
	return ;
}