/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 16:23:49 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/03 16:38:50 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	std::cout << "Default constructor called." << std::endl;
	this->name = "Default";
	this->Hp = 100;
	std::cout << "FragTrap: Default "<< " initial Hp = " << this->Hp << std::endl;
	this->Ep = 100;
	std::cout << "FragTrap: Default "<< " initial Ep = " << this->Ep << std::endl;
	this->Ad = 30;
	std::cout << "FragTrap: Default "<< " initial Ad = " << this->Ad << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "Name constructor called." << std::endl;
	this->name = name;
	this->Hp = 100;
	std::cout << "FragTrap: "<< this->name << " initial Hp = " << this->Hp << std::endl;
	this->Ep = 100;
	std::cout << "FragTrap: "<< this->name << " initial Ep = " << this->Ep << std::endl;
	this->Ad = 30;
	std::cout << "FragTrap: "<< this->name << " initial Ad = " << this->Ad << std::endl;
}

FragTrap&	FragTrap::operator = (const FragTrap& other)
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

FragTrap::~FragTrap()
{
	std::cout << "FragTrap named: " << this->name << " destructor called." << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	if (this->Hp != 0 && this->Ep != 0)
		std::cout << "FragTrap " << this->name << " is requesting to high five." << std::endl;
	if (this->Hp == 0)
		std::cout << "FragTrap " << this->name << " is dead, can't high five." << std::endl;
}
