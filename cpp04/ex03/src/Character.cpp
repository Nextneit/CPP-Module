/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 13:01:56 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/10 18:06:21 by ncruz-ga         ###   ########.fr       */
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

	while (inventory[i])
		i++;
	inventory[i] = *m;
}

void	Character::unequip(int idx)
{
	if (idx <= 3 && idx >= 0 && this->inventory[i] != NULL)
	{
		
	}
}

void	Character::use(int idx, Character& target)
{
	inventory[idx].use(*target);
}
