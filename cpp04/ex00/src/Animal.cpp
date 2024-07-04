/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:07:59 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/04 17:56:02 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor has been called." << std::endl;
	this->type = "Default";
}

Animal::~Animal()
{
	std::cout << "Animal destructor has been called." << std::endl
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
		this->type = original.type;
	return (*this);
}
