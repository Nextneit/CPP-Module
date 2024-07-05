/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 18:45:09 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/05 12:43:53 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ScavTrap(), FragTrap() 
{
	std::cout << "Default constructor called." << std::endl;
	this->_name = "Default";
	this->Hp = FragTrap::Hp;
	std::cout << "DiamondTrap: Default "<< " initial Hp = " << this->Hp << std::endl;
	this->Ep = 50;
	std::cout << "DiamondTrap: Default "<< " initial Ep = " << this->Ep << std::endl;
	this->Ad = FragTrap::Ad;
	std::cout << "DiamondTrap: Default "<< " initial Ad = " << this->Ad << std::endl;
}


DiamondTrap::DiamondTrap(std::string name): ScavTrap(name), FragTrap(name)
{
	std::cout << "Name constructor called." << std::endl;
	this->_name = name;
	this->Hp = FragTrap::Hp;
	std::cout << "DiamondTrap named : " << this->_name << " initial Hp = " << this->Hp << std::endl;
	this->Ep = 50;
	std::cout << "DiamondTrap named : " << this->_name << " initial Ep = " << this->Ep << std::endl;
	this->Ad = FragTrap::Ad;
	std::cout << "DiamondTrap named : " << this->_name << " initial Ad = " << this->Ad << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& original)
{
	std::cout << "Copy constructor has been called." << std::endl;
	this->name = original.name;
	this->Hp = original.Hp;
	std::cout << "DiamondTrap copy: " << this->name << " initial Hp = " << this->Hp << std::endl;
	this->Ep = original.Ep;
	std::cout << "DiamondTrap copy: " << this->name << " initial Ep = " << this->Ep << std::endl;
	this->Ad = original.Ad;
	std::cout << "DiamondTrap copy: " << this->name << " initial Ad = " << this->Ad << std::endl;
}

DiamondTrap&	DiamondTrap::operator = (const DiamondTrap& other)
{
	std::cout << "DiamondTrap: Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->name = other.name;
		this->Hp = other.Hp;
		this->Ep = other.Ep;
		this->Ad = other.Ad;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap named: " << this->_name << " has been destroyed." << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name is " << this->_name << " and ClapTrap name is " << ClapTrap::name + "_clap_name" << std::endl;
}

void	DiamondTrap::attack(std::string target)
{
	ScavTrap::attack(target);
}
