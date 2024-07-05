/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:17:48 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/05 13:31:58 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << type << " constructor has been called." << std::endl;
	new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog destructor has been called." << std::endl;
	delete Brain
}

Dog::Dog(const Dog& original) : Animal(original)
{
	std::cout << "Dog copy constructor has been called." << std::endl;
}

Dog&	Dog::operator = (const Dog& other)
{
	std::cout << "Dog copy operator has been called." << std::endl;
	if (this != &other)
		Animal::operator = (other);
	return (*this);	
}

void	Dog::makeSound() const
{
	std::cout << "Woof!" << std::endl;
}
