/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 13:02:28 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/10 19:05:26 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cure.hpp"

Cure::Cure()
{
	this->type = "cure";
}

Cure::~Cure()
{
}

Cure&	Cure::Cure(Cure &original)
{
	*this = original;
}

Cure&	Cure::operator = (const Cure& other)
{
	if (this != &other)
		this = other;
	return (*this)
}

AMateria	Cure::clone()
{
	AMateria new_cure = new Cure(*this);
	return (new_cure);
}
