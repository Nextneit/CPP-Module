/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 16:09:07 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/25 17:43:33 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"

Span::Span()
{
}

Span::Span(Span &original)
{
	this->array = original.array;
}

Span::~Span()
{
}

Span&	Span::operator = (const Span &other)
{
	if (this != &other)
		this->array = other.array;
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

int	Span::shortestSpan()
{
	std::sort(this->array.begin(), this->array.end());
	std::vector<int>::iterator begin = this->array.begin();
	std::vector<int>::iterator	i = begin + 1;
	int	res = INT_MAX;
	while (begin < this->array.end())
	{
		while (i < this->array.end())
		{
			if (*i - *begin < res)
				res = *i - *begin;
			i++;
		}
		begin++;
		i = begin + 1;
	}
	return (res);
}

int	Span::longestSpan()
{
	std::sort(this->array.begin(), this->array.end());
	std::vector<int>::iterator begin = this->array.begin();
	std::vector<int>::iterator	i = begin + 1;
	int	res = INT_MIN;
	while (begin < this->array.end())
	{
		while (i < this->array.end())
		{
			if (*i - *begin > res)
				res = *i - *begin;
			i++;
		}
		begin++;
		i = begin + 1;
	}
	return (res);
}

void	Span::addNumber(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end)
{
	if (this->array.size() + std::distance(begin, end) > this->size)
		throw SizeLimit();
	this->array.insert(this->array.end(), begin, end);
}
