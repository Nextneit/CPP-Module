/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 12:51:21 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/08/08 16:22:41 by ncruz-ga         ###   ########.fr       */
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
		this->dataBase = other.dataBase;
	return (*this);
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
		return ;
	}
	if (!inputStream.is_open())
	{
		std::cerr << "Can't open input file." << std::endl;
		return ;
	}
	this->openFile(dataStream, inputStream);
}

void	print(std::map<std::string, double>::iterator &it, std::string date, const double value)
{
	std::cout << date << " => " << value << " = " << value * it->second << std::endl; 
}

void	BitcoinExchange::getDataValue(std::string date, const double &value)
{
	std::map<std::string, double>::iterator it = this->dataBase.begin();
	try
	{
		if (date < it->first)
			throw (BitcoinExchange::DataNotFound());
		it = this->dataBase.lower_bound(date);
		if (it != dataBase.begin())
		{
			if (it->first != date)
				it--;
			print(it, date, value);
		}
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

static bool	checkDay(int year, int month, int day)
{
	switch (month)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
		{
			if (day > 31 || day <= 0)
				return (false);
			break ;
		}
		case 4:
		case 6:
		case 9:
		case 11:
		{
			if (day > 30 || day <= 0)
				return (false);
			break ;
		}
		case 2:
		{
			if (year % 400 == 0 || (year % 4 == 0 && (year % 100 != 0)))
			{
				if (day > 29 || day <= 0)
					return (false);
			}
			else
			{
				if (day > 28 || day <= 0)
					return (false);
			}
			break ;
		}
		default:
			return (false);
	}
	return (true);
}

static void	checkDate(std::string str)
{
	int	i;
	int	j;
	int	year;
	int	month;
	int	day;
	
	if (!str.find("-", 0))
		throw (BitcoinExchange::BadDateException());
	else
	{
		i = str.find("-", 0);
		year = atoi(str.substr(0, i).c_str());
		if (year < 2009)
			throw (BitcoinExchange::BadDateException());
		j = str.find("-", i + 1);
		month = atoi(str.substr(i + 1, j).c_str());
		if (month < 1 || month > 12)
			throw (BitcoinExchange::BadDateException());
		day = atoi(str.substr(j + 1, str.length()).c_str());
		if (!checkDay(year, month, day))
			throw (BitcoinExchange::BadDateException());
	}
}

static void	saveInputStream(std::string &str, BitcoinExchange &btc)
{
	double		nbr;
	std::string	date;
	std::string	value;
	int			j;
	
	(void) btc;
	if (str == "date | value")
		return ;
	try
	{
		if (!str.find(" | ", 0))
			throw (BitcoinExchange::BadDateException());
		else if (str.find(" | ", 0))
		{
			j = str.find(" | ", 0);
			date = str.substr(0, j);
			value = str.substr(j + 3);
			nbr = atof (value.c_str());
			if (nbr >= 1000 || (nbr == 0.0 && (value != "0.0" || value != "0")))
				throw (BitcoinExchange::ValueOutException());
			if (nbr < 0.0)
				throw (BitcoinExchange::NegativeValueException());
			checkDate(date);
			btc.getDataValue(date, nbr);
		}
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	BitcoinExchange::setDataBase(const std::string &date, const double &value)
{
	this->dataBase.insert(std::pair<std::string, double>(date, value));
}

static void	saveDataStream(std::string &str, BitcoinExchange &btc)
{
	int	i = str.find(",", 0);
	std::string	date = str.substr(0, i);
	double	value = atof((str.substr(i + 1, str.length() - i + 1)).c_str());
	btc.setDataBase(date, value);
}

void	BitcoinExchange::openFile(std::ifstream &dataStream, std::ifstream &inputStream)
{
	std::string	str;
	
	while (dataStream.good())
	{
		std::getline(dataStream, str);
		saveDataStream(str, *this);
	}
	while (inputStream.good())
	{
		std::getline(inputStream, str);
		saveInputStream(str, *this);
	}
}
