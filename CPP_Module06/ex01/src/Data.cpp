/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 17:00:01 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/22 17:15:22 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Data.hpp"

Data::Data()
{
	this->name = "Default";
}

Data::Data(Data &original)
{
	if (this != &original)
		*this = original;
}

Data&	Data::operator = (const Data &other)
{
	if (this != &other)
		this->name = other.name;
	return (*this);
}

Data::~Data()
{
}

std::string	Data::getName() const
{
	return (this->name);
}
