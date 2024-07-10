/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 13:01:56 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/10 19:04:46 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"

Character::Character()
{
	this->name = "Default";
}

Character::Character(std::string name)
{
	this->name = name;
}

Character&	Character::Character(Character &original)
{
	*this = original;
}

Character&	Character::operator = (const Character& other)
{
	if (this != other)
		this = other;
	return (*this);
}

Character::~Character()
{
	int	i = 0;

	while (inventory[i])
	{
		delete inventory[i];
		i++;
	}
	i = 0;
	while (unequiped[i])
	{
		delete unequiped[i];
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
		return ;
	}
	else
	{
		std::cout << "Can't equip the Materia, inventory is full." << std::endl;
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
		this->unequiped[i] = this->inventory[idx];
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
		std::cout << "Can't use an unequiped materia." << std::endl
}
