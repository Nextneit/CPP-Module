/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 12:51:21 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/08/05 14:09:20 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::~BitcoinExchange()
{
}

BitcoinExchange&	BitcoinExchange:: operator = (const BitcoinExchange &other)
{
	if (this != &other)
		this->dataBase = other.dataBase
}

BitcoinExchange::BitcoinExchange(BitcoinExchange &original)
{
	this->dataBase = original.dataBase;
}

BitcoinExchange::BitcoinExchange(std::string &data, std::string &input)
{
	std::ifstream dataStream;
	std::ifstream inputStream;

	dataStream.open(data.c_str());
	inputStream.open(input.c_str());
	if (!dataStream.is_open())
	{
		std::cerr << "Can't open data file." << std::endl;
		return (1);
	}
	if (!inputStream.is_open())
	{
		std::cerr << "Can't open input file." << std::endl;
		return (1);
	}
	this->openFile(dataStream, inputStream);
}

BitcoinExchange::openFile(std::ifstream &dataStream, std::ifstream &inputStream)
{
	std::string	str = NULL;
	
	while (dataStream.good())
	{
		std::getline(dataStream, str);
		saveDataStream(str, *this)
	}
	str = NULL;
	while (inputStream.good())
	{
		std::getline(inputStream, str);
	}
}
