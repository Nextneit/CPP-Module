/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 13:02:28 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/10 18:07:43 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cure.hpp"

Cure::Cure()
{
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

AMateria	clone()
{
	
}
