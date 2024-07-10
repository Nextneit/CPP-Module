/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 13:01:56 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/10 15:20:27 by ncruz-ga         ###   ########.fr       */
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
}

void	Character::equip(AMateria* m)
{
	
}

void	Character::unequip(int idx)
{

}

void	Character::use(int idx, Character& target)
{
	
}