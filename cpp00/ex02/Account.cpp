/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 15:57:48 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/06/10 12:22:57 by ncruz-ga         ###   ########.fr       */
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
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal";
	if (wd > _amount)
	{
		std::cout << "refused"
		return false;
	}
	_amount -= wd;
	_nbWithdrawals += 1;
	std::cout << ";amount:" << amount << ";nb_withdrawals:" << _nbWithdrawals;
	_totalNbWithdrawals += 1;
	_totalAmount -= wd;
	return true;
}

void	Account::makeDeposit(int dep)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount; << ";deposit:" << dep;
	_amount += dep;
	_nbDeposits += 1;
	std::cout << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
	_totalNbDeposits += 1;
	_totalAmount += dep;
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
