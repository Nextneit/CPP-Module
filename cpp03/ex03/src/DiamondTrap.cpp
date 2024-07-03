/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 18:45:09 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/03 16:38:18 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): FragTrap(), ScavTrap()
{
	std::cout << "Default constructor called." << std::endl;
	this->_name = "Default";
	this->Hp = FragTrap::Hp;
	std::cout << "DiamondTrap: Default "<< " initial Hp = " << this->Hp << std::endl;
	this->Ep = ScavTrap::Ep;
	std::cout << "DiamondTrap: Default "<< " initial Ep = " << this->Ep << std::endl;
	this->Ad = FragTrap::Ad;
	std::cout << "DiamondTrap: Default "<< " initial Ad = " << this->Ad << std::endl;
}


DiamondTrap::DiamondTrap(std::string name): FragTrap(name), ScavTrap(name)
{
	std::cout << "Default constructor called." << std::endl;
	this->_name = name;
	this->Hp = FragTrap.Hp;
	std::cout << "DiamondTrap named : " << this->_name << " initial Hp = " << this->Hp << std::endl;
	this->Ep = ScavTrap.Hp;
	std::cout << "DiamondTrap named : " << this->_name << " initial Ep = " << this->Ep << std::endl;
	this->Ad = FragTrap.Ad;
	std::cout << "DiamondTrap named : " << this->_name << " initial Ad = " << this->Ad << std::endl;
}

DiamondTrap::~DiamondTrap()
{

}
