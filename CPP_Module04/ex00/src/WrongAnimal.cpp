/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 13:09:23 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/05 13:11:10 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor has been called." << std::endl;
	this->type = "Default";
}

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
	std::cout << "WrongAnimal " << type << " constructor called." << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor has been called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& original)
{
	std::cout << "WrongAnimal copy constructor has been called." << std::endl;
	this->type = original.type;
}

WrongAnimal&	WrongAnimal::operator = (const WrongAnimal& other)
{
	std::cout << "WrongAnimal copy operator has been called." << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

std::string	WrongAnimal::getType() const
{
	return (type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal sound." << std::endl;
}
