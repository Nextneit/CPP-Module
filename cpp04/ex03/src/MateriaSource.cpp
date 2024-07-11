/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 13:03:48 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/11 17:26:23 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	int	i = 0;
	while (i < 4)
	{
		this->inventory[i] = NULL;
		i++;
	}
	std::cout << "MateriaSource has been created." << std::endl;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource has been destroyed." << std::endl;
}

MateriaSource& MateriaSource::operator = (MateriaSource &other)
{
	if (this != &other)
	{
		int i = 0;
		while (i < 4)
		{
			if (this->inventory[i] != other.inventory[i])
				this->inventory[i] = other.inventory[i];
			i++;
		}
	}
	std::cout << "MateriaSource copy operator has been called." << std::endl;
	return (*this);
}

MateriaSource::MateriaSource(MateriaSource &original)
{
	int	i = 0;

	while (original.inventory[i])
	{
		this->inventory[i] = original.inventory[i];
		i++;
	}
	std::cout << "MateriaSource copy constructor has been called." << std::endl;
}

void	MateriaSource::learnMateria(AMateria *m)
{
	int	i = 0;

	while (this->inventory[i])
		i++;
	if (i < 4 && this->inventory[i] == NULL)
	{
		std::cout << "Materia learned." << std::endl;
		this->inventory[i] = m;
		return ;
	}
	else
	{
		std::cout << "Materia can't be learned." << std::endl;
		delete m;
		return ;
	}
}

AMateria*	MateriaSource::createMateria(std::string const &m)
{
	int	i = 0;
	while (i < 4)
	{
		if (this->inventory[i] && this->inventory[i]->getType() == m)
		{
			std::cout << "Materia created." << std::endl;
			return (this->inventory[i]->clone());
		}
		i++;
	}
	std::cout << "Materia can be created." << std::endl;
	return (0);
}
