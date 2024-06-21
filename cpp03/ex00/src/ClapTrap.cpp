/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 17:21:58 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/06/21 13:01:38 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->Hp = 10;
	this->Ep = 10;
	this->Ad = 0;
}
ClapTrap::ClapTrap(const ClapTrap& original)
{
	this->name = original.name;
	this->Hp = original.Hp;
	this->Ep = original.Ep;
	this->Ad = original.Ad;
}

ClapTrap&	ClapTrap::operator = (const ClapTrap& other)
{
	if (this != &other)
	{
		this->name = original.name;
		this->Hp = original.Hp;
		this->Ep = original.Ep;
		this->Ad = original.Ad;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
}

void	attack(const std::string& target)
{
	std::cout << "ClapTrap " << this->name;
	std::cout << " attacks " << target;
	std::cout << " causing " << this->Ad << "points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->Hp -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->Hp += amount;
}
