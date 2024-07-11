/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 13:03:05 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/11 17:23:44 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Ice.hpp"

Ice::Ice()
{
	this->type = "ice";
	std::cout << "Materia ice has been created." << std::endl;
}

Ice::~Ice()
{
	std::cout << "Materia ice has been destroyed." << std::endl;
}

Ice::Ice(Ice &original)
{
	*this = original;
	std::cout << "Materia ice copy constructor has been called." << std::endl;
}

Ice&	Ice::operator = (const Ice& other)
{
	if (this != &other)
		this->type = other.type;
	std::cout << "Materia ice copy operator has been called." << std::endl;
	return (*this);
}

AMateria*	Ice::clone() const
{
	return ((AMateria*)this);
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *"<< std::endl;
}
