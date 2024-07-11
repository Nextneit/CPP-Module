/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 13:01:56 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/11 12:08:56 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"

Character::Character()
{
	this->name = "Default";
	int	i = 0;
	while (i < 4)
	{
		this->inventory[i] = NULL;
		i++;
	}
	i = 0;
	while (i < 500)
	{
		this->unequiped[i] = NULL;
		i++;
	}
}

Character::Character(std::string name)
{
	this->name = name;
	int	i = 0;
	while (i < 4)
	{
		this->inventory[i] = NULL;
		i++;
	}
	i = 0;
	while (i < 500)
	{
		this->unequiped[i] = NULL;
		i++;
	}
}

Character&	Character::Character(Character &original)
{
	*this = original;
}

Character&	Character::operator = (const Character& other)
{
	if (this != other)
	{
		this->name = other.name;
		int	i = 0;
		while (i < 4)
		{
			if (this->inventory[i] != NULL)
				delete this->inventory[i];
			if (other.inventory[i] != NULL)
				this->inventory[i] = other.inventory[i]->clone();
			else
				this->inventory[i] = NULL;
			i++;
		}
		i = 0;
		while (i < 500)
		{
			if (this->unequiped[i] != NULL)
				delete this->unequiped[i];
			if (other.unequiped[i] != NULL)
				this->unequiped[i] = other.unequiped[i]->clone();
			else
				this->unequiped[i] = NULL;
			i++;
		}
	}
	return (*this);
}

Character::~Character()
{
	int	i = 0;

	while (this->inventory[i])
	{
		delete this->inventory[i];
		i++;
	}
	i = 0;
	while (this->unequiped[i])
	{
		delete this->unequiped[i];
		i++;
	}
}

void	Character::equip(AMateria* m)
{
	int	i = 0;

	while (this->inventory[i])
		i++;
	if (this->inventory[i] == NULL)
	{
		this->inventory[i] = m;
		std::cout << "The Materia has been equipped." << std::cout;
		return ;
	}
	else
	{
		std::cout << "Can't equip the Materia, inventory is full." << std::endl;
		i = 0;
		while (this->unequiped[i] != NULL)
			i++;
		this->unequiped[i] = m;
		return ;
	}
}

void	Character::unequip(int idx)
{
	if (idx <= 3 && idx >= 0 && this->inventory[i] != NULL)
	{
		int i = 0;
		while (this->unequiped[i] != NULL)
			i++;
		this->unequiped[i] = new AMateria(this->inventory[idx]);
		delete this->inventory[idx];
	}
	else if (idx > 3 || idx < 0)
		std::cout << "Incorrect index for unequip." << std::endl;
	else if (this->inventory[i] == NULL)
		std::cout << "Empty inventory, can't unequip" << std::endl;
}

void	Character::use(int idx, Character& target)
{
	if (idx <= 3 && idx >= 0 && this->inventory[i] != NULL)
		inventory[idx].use(*target);
	else if (idx > 3 || idx < 0)
		std::cout << "Incorrect index for inventory." << std::endl;
	else if (this->inventory[i] == NULL)
		std::cout << "Can't use an unequipped materia." << std::endl
}
