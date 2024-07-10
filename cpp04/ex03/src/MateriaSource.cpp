/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 13:03:48 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/10 16:30:26 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
}

~MateriaSource::MateriaSource()
{
}

MateriaSource& MateriaSource::operator = (MateriaSource &other)
{
	if (this != &other)
		this = other
	return (*this);
}

MateriaSource&	MateriaSource::MateriaSource(MateriaSource &original)
{
	int	i = 0;

	while (original.inventory[i])
	{
		this->inventory[i] = original.inventory;
		i++;
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria m*)
{
	int	i = 0;

	while (this->inventory[i])
		i++;
	this->inventory[i] = *m;
}

AMateria*	createMateria(std::string const& m)
{
	AMateria this = new AMateria(m);
	return (*this);
}
