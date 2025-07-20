/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 20:02:56 by yulpark           #+#    #+#             */
/*   Updated: 2025/07/20 20:27:23 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Account.hpp"

//not initialised in the main...
int	Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{

}

Account::~Account( void )
{
}

void Account::makeDeposit(int deposit)
{
}

bool Account::makeWithdrawal(int withdrawal)
{
	return false;
}

int Account::checkAmount(void) const
{
	return 0;
}

void Account::displayStatus(void) const
{
}

void Account::_displayTimestamp(void)
{
	// [yyyyMMdd_hhmmss]
	std::tm t = {};
	get_time(&t, );
}

int Account::getNbAccounts(void)
{
	return 0;
}

int Account::getTotalAmount(void)
{
	return 0;
}

int Account::getNbDeposits(void)
{
	return 0;
}

int Account::getNbWithdrawals(void)
{
	return 0;
}

void Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();

}


