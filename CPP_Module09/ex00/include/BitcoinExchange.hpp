/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 12:51:24 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/08/08 12:13:22 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <map>
# include <fstream>
# include <cstdlib>

class	BitcoinExchange
{
	private:
		std::map<std::string, double> dataBase;
	public:
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange& operator = (const BitcoinExchange &other);
		BitcoinExchange(BitcoinExchange &original);
		BitcoinExchange(std::string &data, std::string &input);
		void	openFile(std::ifstream &dataStream, std::ifstream &inputStream);
		void	setDataBase(const std::string &date, const double &value);
		class	BadDateException : public std::exception
		{
			const char	*what() const throw()
			{
				return ("Bad date input.");
			}
		};
		class	ValueOutException : public std::exception
		{
			const char	*what() const throw()
			{
				return ("Value out of range.");
			}
		};
		class	NegativeValueException : public std::exception
		{
			const char	*what() const throw()
			{
				return ("Negative value not allowed.");
			}
		};
};

#endif
