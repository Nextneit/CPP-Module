/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:07:59 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/05 12:53:23 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor has been called." << std::endl;
	this->type = "Default";
}

Animal::Animal(std::string type) : type(type)
{
	std::cout << "Animal " << type << " constructor called." << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor has been called." << std::endl;
}

Animal::Animal(const Animal& original)
{
	std::cout << "Animal copy constructor has been called." << std::endl;
	this->type = original.type;
}

Animal&	Animal::operator = (const Animal& other)
{
	std::cout << "Animal copy operator has been called." << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

std::string	Animal::getType() const
{
	return (type);
}

void	Animal::makeSound() const
{
	std::cout << "Animal sound." << std::endl;
}
