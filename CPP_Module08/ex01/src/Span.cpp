/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 16:09:07 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/25 16:55:30 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"

Span::Span()
{
}

Span::Span(const Span &original)
{
	this->array = original.array;
}

Span::~Span()
{
}

Span&	Span::operator = (const Span &other)
{
	if (this != &other)
		this->array = other;
	return (*this);
}

Span::Span(unsigned int n)
{
	this->size = n;
}

void	Span::addNumber(int n)
{
	if (this->array.size() >= this->size)
		throw SizeLimit();
	this->array.push_back(n);
}

const char * Span::SizeLimit::what() const throw()
{
	return "Size limit exceded";
}

int	shortestSpan()
{
	
}

int	longestSpan()
{

}
