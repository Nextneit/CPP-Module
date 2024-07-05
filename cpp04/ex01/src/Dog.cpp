/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:17:48 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/05 14:02:36 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << type << " constructor has been called." << std::endl;
	this->brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog destructor has been called." << std::endl;
	delete this->brain;
}

Dog::Dog(const Dog& original) : Animal(original)
{
	std::cout << "Dog copy constructor has been called." << std::endl;
	this->brain.Brain(original.brain);
}

Dog&	Dog::operator = (const Dog& other)
{
	std::cout << "Dog copy operator has been called." << std::endl;
	if (this != &other)
	{
		Animal::operator = (other);
		this->brain = other.brain;
	}
	return (*this);	
}

void	Dog::makeSound() const
{
	std::cout << "Woof!" << std::endl;
}
