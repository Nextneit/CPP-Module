/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:18:06 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/04 18:21:54 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << type << " constructor has been called." << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor has been called." << std::endl;
}

Cat::Cat(const Cat& original) : Animal(original)
{
	std::cout << "Cat copy constructor has been called." << std::endl;
}

Cat&	Cat::operator = (const Cat& other)
{
	std::cout << "Cat copy operator has been called." << std::endl;
	if (this != &other)
		Animal::operator = (other);
	return (*this);	
}

void	Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}
