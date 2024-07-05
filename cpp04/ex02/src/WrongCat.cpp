/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 13:07:06 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/05 13:09:08 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << type << " constructor has been called." << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor has been called." << std::endl;
}

WrongCat::WrongCat(const WrongCat& original) : WrongAnimal(original)
{
	std::cout << "WrongCat copy constructor has been called." << std::endl;
}

WrongCat&	WrongCat::operator = (const WrongCat& other)
{
	std::cout << "WrongCat copy operator has been called." << std::endl;
	if (this != &other)
		WrongAnimal::operator = (other);
	return (*this);	
}

void	WrongCat::makeSound() const
{
	std::cout << "Quack!" << std::endl;
}
