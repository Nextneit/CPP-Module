/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 17:20:50 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/08/08 17:35:35 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RPN.hpp"

RPN::RPN()
{
}

RPN::RPN(RPN &original)
{
	this = original;
}

RPN::~RPN()
{
}

RPN&	RPN::operator = (RPN &other)
{
	if (this != &other)
		this = other;
	return (*this);
}
