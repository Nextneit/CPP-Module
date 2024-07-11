/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 13:22:12 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/11 18:24:47 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor has been called." << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor has been called." << std::endl;
}

Brain::Brain(const Brain &original)
{
	std::cout << "Brain copy constructor has been called." << std::endl;
	*this = original;
}

Brain&	Brain::operator = (const Brain& other)
{
	std::cout << "Brain copy operator has been called." << std::endl;
	if (this != &other)
	{
		int	i = 0;
		while (i < 100)
		{
			this->ideas[i] = other.ideas[i];
			i++; 
		}
	}
	return (*this);
}
