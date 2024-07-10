/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 13:03:05 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/10 19:05:43 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Ice.hpp"

Ice::Ice()
{
	this->type = "ice";
}

Ice::~Ice()
{
}

Ice&	Ice::Ice(Ice &original)
{
	*this = original;
}

Ice&	Ice::operator = (const Ice& other)
{
	if (this != &other)
		this = other;
	return (*this)
}

AMateria	Ice::clone()
{
	AMateria new_ice = new Ice(*this);
	return (new_ice);
}
