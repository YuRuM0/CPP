/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 20:02:56 by yulpark           #+#    #+#             */
/*   Updated: 2025/07/26 15:54:09 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

//not initialised in the main...
int	Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	//role: create a new account w/ init deposit
	_accountIndex  = _nbAccounts; //gives index
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;

	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << _amount
			  << ";created\n";
}

Account::~Account( void )
{
	_nbAccounts--;
	_totalAmount -= _amount;
	_totalNbDeposits -= _nbDeposits;
	_totalNbWithdrawals -= _nbWithdrawals;
	//[19920104_091532] index:7;amount:8942;closed
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << _amount
	          << ";closed\n";
}

void Account::makeDeposit(int deposit)
{
	_totalAmount += deposit;
	_amount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;

	_displayTimestamp();
	//[19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
	std::cout << " index:" << _accountIndex << ";p_amount:" << _amount - deposit
			  << ";deposit:" << deposit << ";amount:" << _amount
			  << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";p_amount:" << _amount;
	_amount -= withdrawal;
	if (checkAmount())
	{
		// [19920104_091532] index:5;p_amount:23;withdrawal:refused
		_amount += withdrawal;
		std:: cout << ";withdrawal:" << "refused\n";
		return(false);
	}
	////amount:785;nb_withdrawals:1
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	_nbWithdrawals++;
	std::cout << ";withdrawal:" << withdrawal << ";amount:" << _amount
	          << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	return (true);

}

int Account::checkAmount(void) const
{
	if (_amount < 0)
		return (1);
	return (0);
}

////Get values ////////////////////////////
int Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

////Display functions///////////////////////////
void Account::displayStatus(void) const
{
	//[19920104_091532] index:0;amount:42;deposits:0;withdrawals:0
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << _amount
			  << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals
			  << std::endl;
}

void Account::_displayTimestamp(void)
{
	// [yyyyMMdd_hhmmss]
	time_t timestamp;
	char formatted[16]; // hold the formatted ts

	time(&timestamp); // fills the variable w/ current time
	std::strftime(formatted, sizeof(formatted), "%Y%m%d_%H%M%S", std::localtime(&timestamp));
	std::cout << '[' << formatted << ']';
}

void Account::displayAccountsInfos(void)
{
	//[19920104_091532] accounts:8;total:21524;deposits:8;withdrawals:0
	Account::_displayTimestamp();
	std::cout << " accounts:" << Account::getNbAccounts() << ";total:" << Account::getTotalAmount()
			  << ";deposits:" << Account::getNbDeposits() << ";withdrawals:" << Account::getNbWithdrawals()
			  << std::endl;
}


