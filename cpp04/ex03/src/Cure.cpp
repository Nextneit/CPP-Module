/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 13:02:28 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/11 17:24:34 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cure.hpp"

Cure::Cure()
{
	this->type = "cure";
	std::cout << "Materia cure has been created." << std::endl;
}

Cure::~Cure()
{
	std::cout << "Materia cure has been destroyed." << std::endl;
}

Cure::Cure(Cure &original)
{
	*this = original;
	std::cout << "Materia cure copy constructor has been called." << std::endl;
}

Cure&	Cure::operator = (const Cure &other)
{
	if (this != &other)
		this->type = other.type;
	std::cout << "Materia cure copy operator has been called." << std::endl;
	return (*this);
}

AMateria*	Cure::clone() const
{
	return ((AMateria*)this);
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *"<< std::endl;
}
