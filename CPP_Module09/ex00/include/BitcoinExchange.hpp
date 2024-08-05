/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 12:51:24 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/08/05 12:44:43 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <map>

class	BitcoinExchange
{
	private:
		std::map<std::string, double> dataBase;
	public:
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange& operator = (const BitcoinExchange &other);
		BitcoinExchange(BitcoinExchange &original);
};

#endif
