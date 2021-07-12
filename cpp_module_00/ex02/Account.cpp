#include "Account.hpp"

Account::Account(int initial_deposit)
{
	_totalAmount = initial_deposit;
}

Account::Account(void)
{
	return ;
}

Account::~Account()
{
	return ;
}

int		Account::checkAmount(void) const
{
	return (_totalAmount);
}

void	Account::makeDeposit(int deposit)
{
	_totalAmount += deposit;
	_totalNbDeposits++;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	if (this->checkAmount() >= withdrawal) {
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		return (true);
	}
	return (false);
}

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

void	Account::displayAccountsInfos( void )
{
	return ;
}