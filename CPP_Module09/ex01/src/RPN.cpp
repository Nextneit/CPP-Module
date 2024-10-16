/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 17:20:50 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/10/16 18:58:19 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RPN.hpp"

RPN::RPN()
{
}

RPN::RPN(RPN &original)
{
	this->nbrs = original.nbrs;
}

void	RPN::calculateRPN(char sign)
{
	double	a;
	double	b;

	if (this->nbrs.size() < 2)
		throw (RPN::InvalidExpresion());
	b = this->nbrs.top();
	this->nbrs.pop();
	a = this->nbrs.top();
	this->nbrs.pop();
	if (sign == '+')
		this->nbrs.push(a + b);
	else if (sign == '-')
		this->nbrs.push(a - b);
	else if (sign == '*')
		this->nbrs.push(a * b);
	else if (sign == '/')
	{
		if (a == 0 || b == 0)
		{
			std::cerr << "Error: division between 0 not allowed" << std::endl;
			exit(1);
		}
		this->nbrs.push(a / b);
	}
}

int	RPN::checkSign(char arg)
{
	if (arg == '+' || arg == '-' || arg == '/' || arg == '*')
		return (0);
	else
		return (1);
}

RPN::RPN(std::string arg)
{
	size_t	i = 0;
	int		j = 0;

	try
	{
		if (arg.length() == 0)
			throw (RPN::Null());
		while (i < arg.length())
		{
			if (isdigit(arg[i]) != 0)
			{
				this->nbrs.push(atof(&arg[i]));
				j++;
			}
			else if (this->checkSign(arg[i]) == 0)
				this->calculateRPN(arg[i]);
			if (isdigit(arg[i]) != 0 && isdigit(arg[i + 1]) != 0)
				throw (RPN::TwoNumber());//excepcion de numeros mayor de 9
			i++;
		}
		if (this->nbrs.size() != 1)
			throw (RPN::Tokens());
		if (j == 1)
			throw (RPN::OneNumber());
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return ;
	}
	std::cout << this->nbrs.top() << std::endl;
}

RPN::~RPN()
{
}

RPN&	RPN::operator = (RPN &other)
{
	if (this != &other)
		this->nbrs = other.nbrs;
	return (*this);
}
