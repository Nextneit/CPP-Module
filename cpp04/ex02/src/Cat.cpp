/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:18:06 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/10 15:27:15 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << type << " constructor has been called." << std::endl;
	this->brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat destructor has been called." << std::endl;
	delete this->brain;
}

Cat::Cat(const Cat& original) : Animal(original), brain(new Brain(*original.brain))
{
	std::cout << "Cat copy constructor has been called." << std::endl;
}

Cat&	Cat::operator = (const Cat& other)
{
	std::cout << "Cat copy operator has been called." << std::endl;
	if (this != &other)
	{
		Animal::operator = (other);
		if (this->brain)
			delete this->brain;
		this->brain = new Brain(other.brain);
	}
	return (*this);	
}

void	Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}
