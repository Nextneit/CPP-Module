/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 14:54:02 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/22 13:31:28 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(ScalarConverter &original)
{
	(void)original;
}

ScalarConverter&	ScalarConverter::operator = (ScalarConverter &other)
{
	(void)other;
	return (*this);
}

ScalarConverter::~ScalarConverter()
{
}

bool	isround(float nbr)
{
	int	i = static_cast<int>(nbr);
	if (nbr == i)
		return (true);
	return (false);
}

int		getType(std::string arg)
{
	if (arg == "nan" || arg == "+inf" || arg == "-inf" || arg == "inf")
		return (PLD);
	if (arg == "nanf" || arg == "+inff" || arg == "-inff")
		return (PLF);
	if (arg.length() == 1 && std::isalpha(arg[0]) && std::isprint(arg[0]))
		return (CHAR);
	char	*eptr;
	strtol(arg.c_str(), &eptr, 10);
	if (eptr[0] == '\0')
		return (INT);
	strtod(arg.c_str(), &eptr);
	if (eptr[0] == 'F' || eptr[0] == 'f')
		return (FLOAT);
	else if (eptr[0] == '\0')
		return (DOUBLE);
	return (-1);
}

void	ScalarConverter::convert(std::string arg)
{
	switch (getType(arg))
	{
		case CHAR:
		{
			char	c = arg[0];
			std::cout << "char: '" << c << "'" << std::endl;
			std::cout << "int: " << static_cast<int>(c) << std::endl;
			std::cout << "float: " << static_cast<float>(c) << std::endl;
			std::cout << "double: " << static_cast<double>(c) << std::endl;
			break ;
		}
		case INT:
		{
			int		i = atoi(arg.c_str());
			std::cout << "char: ";
			if (isprint(static_cast<char>(i)))
				std::cout << "'" << static_cast<char>(i) << "'" << std::endl;
			else
				std::cout << "non displayable" << std::endl;
			if (atol(arg.c_str()) > INT_MAX || atol(arg.c_str()) < INT_MIN)
			{
				std::cout << "int: value overflow" << std::endl;
				std::cout << "float: value overflow" << std::endl;
				std::cout << "double: value overflow" << std::endl;
				break ;
			}
			std::cout << "int: " << i << std::endl;
			std::cout << "float: " << static_cast<float>(i) << ".0f" <<std::endl;
			std::cout << "double: " << static_cast<double>(i) << ".0" <<std::endl;
			break ;
		}
		case FLOAT:
		{
			float	f = atof(arg.c_str());
			std::cout << "char: ";
			if (isround(f) && isprint(static_cast<char>(f)))
				std::cout << "'" << static_cast<char>(f) << "'" << std::endl;
			else
				std::cout << "non displayable" << std::endl;
			if (atol(arg.c_str()) > INT_MAX || atol(arg.c_str()) < INT_MIN)
			{
				std::cout << "int: value overflow" << std::endl;
				std::cout << "float: value overflow" << std::endl;
				std::cout << "double: value overflow" << std::endl;
				break ;
			}
			std::cout << "int: " << static_cast<int>(f) << std::endl;
			std::cout << "float: " << f;
			if (isround(f))
				std::cout << ".0f" << std::endl;
			else
				std::cout << "f" << std::endl;
			std::cout << "double: " << static_cast<double>(f);
			if (isround(f))
				std::cout << ".0" << std::endl;
			else
				std::cout << std::endl;
			break ;
		}
		case DOUBLE:
		{
			double	d = atof(arg.c_str());
			std::cout << "char: ";
			if (isround(d) && isprint(static_cast<char>(d)))
				std::cout << "'" << static_cast<char>(d) << "'" << std::endl;
			else
				std::cout << "non displayable" << std::endl;
			if (atol(arg.c_str()) > INT_MAX || atol(arg.c_str()) < INT_MIN)
			{
				std::cout << "int: value overflow" << std::endl;
				std::cout << "float: value overflow" << std::endl;
				std::cout << "double: value overflow" << std::endl;
				break ;
			}
			std::cout << "int: " << static_cast<int>(d) << std::endl;
			std::cout << "float: " << d;
			if (isround(d))
				std::cout << ".0f" << std::endl;
			else
				std::cout << "f" << std::endl;
			std::cout << "double: " << static_cast<double>(d);
			if (isround(d))
				std::cout << ".0" << std::endl;
			else
				std::cout << std::endl;
			break ;
		}
		case PLF:
		{
			std::cout << "char: non displayable" << std::endl;
			std::cout << "int: non displayable" << std::endl;
			std::cout << "float: " << arg << std::endl;
			std::cout << "double: " << arg.substr(0, arg.length() - 1) << std::endl;
			break ;
		}
		case PLD:
		{
			std::cout << "char: non displayable" << std::endl;
			std::cout << "int: non displayable" << std::endl;
			std::cout << "float: " << arg << std::endl;
			std::cout << "double: " << arg << std::endl;
			break ;
		}
		default:
		{
			std::cout << "Error: no possible conversion." << std::endl;
			break;
		}
	}
}
