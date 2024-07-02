/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 16:32:39 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/02 16:15:54 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	std::cout << "Default constructor called." << std::endl;
	this->name = "default";
	this->Hp = 100;
	std::cout << "ScavTrap: default "<< " initial Hp = " << this->Hp << std::endl;
	this->Ep = 50;
	std::cout << "ScavTrap: default "<< " initial Ep = " << this->Ep << std::endl;
	this->Ad = 20;
	std::cout << "ScavTrap: default "<< " initial Ad = " << this->Ad << std::endl;
}
ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "Name constructor called" << std::endl;
	this->name = name;
	this->Hp = 100;
	std::cout << "ScavTrap: " << this->name << " initial Hp = " << this->Hp << std::endl;
	this->Ep = 50;
	std::cout << "ScavTrap: " << this->name << " initial Ep = " << this->Ep << std::endl;
	this->Ad = 20;
	std::cout << "ScavTrap: " << this->name << " initial Ad = " << this->Ad << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& original)
{
	std::cout << "Copy constructor has been called." << std::endl;
	this->name = original.name;
	this->Hp = original.Hp;
	std::cout << "ScavTrap copy: " << this->name << " initial Hp = " << this->Hp << std::endl;
	this->Ep = original.Ep;
	std::cout << "ScavTrap copy: " << this->name << " initial Ep = " << this->Ep << std::endl;
	this->Ad = original.Ad;
	std::cout << "ScavTrap copy: " << this->name << " initial Ad = " << this->Ad << std::endl;
}

ScavTrap&	ScavTrap::operator = (const ScavTrap& other)
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

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap named: " << this->name << " has been destroyed." << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->Hp && this->Ep)
	{
		std::cout << "ScavTrap " << this->name << " attacks " << target << " causing " << this->Ad << " points of damage!" << std::endl;
		this->Ep -= 1;
		return ;
	}
	if (this->Ep == 0)
		std::cout << "ScavTrap " << this->name << " don't have energy to attack." << std::endl;
	if (this->Hp == 0)
		std::cout << "ScavTrap " << this->name << " is dead, he can't attack." << std::endl;
}

void	ScavTrap::guardGate()
{
	if (this->Hp != 0 && this->Ep != 0)
	{
		std::cout << "ScavTrap " << this->name << " is ";
	}
	if (this->Hp == 0)
		std::cout << "ScavTrap " << this->name << " is dead, can't guard the gate." << std::endl;
}
