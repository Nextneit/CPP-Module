/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 15:08:09 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/09 16:51:30 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "Default AMateria constructor has been called." << std::endl;
	type = "";
}

AMateria::AMateria(std::string const &type)
{
	this->type = type;
	std::cout << "AMateria named " << getType() << " has been created." << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor for " << getType() << " has been called." << std::endl;
}

AMateria& AMateria::AMateria(const &AMateria original)
{
	std::cout << "AMateria copy constructor has been called." << std::endl;
	*this = original;
}

AMateria&	AMateria::operator = (const AMateria& other)
{
	std::cout << "AMateria copy operator has been called." << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

std::string	const &AMateria::getType() const
{
	return (type);
}

void	AMateria::setType(std::string type)
{
	this->type = type;
}

void	AMateria::use(ICharacter &target)
{
	std::cout << "AMateria named " << getType() << "has been used on " << target.getName() << std::endl; 
}
