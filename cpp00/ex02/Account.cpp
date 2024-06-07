/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 15:57:48 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/06/07 16:06:53 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"


void	Account::_displayTimestamp(void)
{
	time_t	now = time(0);
	tm		*ltm;

	ltm = localtime(&now);
	std::cout << "[" << ltm->tm_year + 1900 << (ltm->tm_mon + 1 < 10 ? "0" : "") << ltm->tm_mon + 1;
	std::cout << (ltm->tm_mday < 10 ? "0" : "") << ltm->tm_mday << "_" << ltm->tm_hour;
	std::cout << ltm->tm_min << ltm->tm_sec << "] ";
}
