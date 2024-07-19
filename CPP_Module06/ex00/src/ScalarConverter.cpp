/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 14:54:02 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/19 17:16:52 by ncruz-ga         ###   ########.fr       */
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

}

void	ScalarConverter::convert(std::string arg)
{
	int		i;
	char	c;
	float	f;
	double	d;

	switch (getType(arg))
	{
		
	}
}
