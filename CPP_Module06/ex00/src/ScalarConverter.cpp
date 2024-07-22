/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 14:54:02 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/22 11:56:35 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(ScalarConverter &original)
{
	(void)other;
}

ScalarConverter&	ScalarConverter::operator = (ScalarConverter &other)
{
	(void)other;
	return (*this);
}

ScalarConverter::~ScalarConverter()
{
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
	int		i;
	char	c;
	float	f;
	double	d;

	switch (getType(arg))
	{
		
		default:
		{
			std::cout << "Error: no possible conversion." << std::endl;
			break;
		}
	}
}
