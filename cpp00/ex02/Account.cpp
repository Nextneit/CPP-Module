/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 15:57:48 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/06/07 17:53:31 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

void	getNbWithdrawals()
{
	return (_nbWithdrawals);
}

void	getNbDeposits()
{
	return (_nbDeposits);
}

void	getTotalAmount()
{
	return (_totalAmount);
}

void	getNbAccounts()
{
	return (_nbAccounts);
}

void	Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() <<";total:" << getTotalAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

bool	Account::makeWithdrawal(int wd)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
}

void	Account::makeDeposit(int dep)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount; << ";deposit:" << deposit;
	std::cout << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
	_nbDeposits += 1;
	_totalNbDeposits += 1;
	_amount += deposit;
	_totalAmount += deposit;
}

void	Account::_displayTimestamp(void)
{
	time_t	now = time(0);
	tm		*ltm;

	ltm = localtime(&now);
	std::cout << "[" << ltm->tm_year + 1900 << (ltm->tm_mon + 1 < 10 ? "0" : "") << ltm->tm_mon + 1;
	std::cout << (ltm->tm_mday < 10 ? "0" : "") << ltm->tm_mday << "_" << ltm->tm_hour;
	std::cout << ltm->tm_min << ltm->tm_sec << "] ";
}
