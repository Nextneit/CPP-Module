/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 17:21:58 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/06/21 13:44:37 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called." << std::endl;
	this->name = "default";
	this->Hp = 0;
	this->Ep = 0;
	this->Ad = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->Hp = 10;
	this->Ep = 10;
	this->Ad = 0;
	std::cout << "Claptrap named " << this->name << " has been created." << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap& original)
{
	std::cout << "Copy constructor has been called." << std::endl
	this->name = original.name;
	this->Hp = original.Hp;
	this->Ep = original.Ep;
	this->Ad = original.Ad;
}

ClapTrap&	ClapTrap::operator = (const ClapTrap& other)
{
	if (this != &other)
	{
		this->name = other.name;
		this->Hp = other.Hp;
		this->Ep = other.Ep;
		this->Ad = other.Ad;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap named " << this->name << " has been destroyed." << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap " << this->name;
	std::cout << " attacks " << target;
	std::cout << " causing " << this->Ad << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->Hp -= amount;
	std::cout << "ClapTrap named " << this->name << " has taken " << amount << " point of damage." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->Hp += amount;
	std::cout << "ClapTrap named " << this->name << " healed " << amount << " point of damage." << std::endl;
}
