/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 18:01:00 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/25 12:59:50 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Array.hpp"

template<typename T>
Array<T>::Array(void)
{
	this->array = NULL;
	this->size = 0;
}

template<typename T>
Array<T>::Array(Array &original)
{
	this->array = new T[original.size];
	unsigned int i = 0;
	while (i < original.size)
	{
		this->array[i] = original.array[i]
		i++;
	}
	this->size = original.size;
}

template<typename T>
Array::Array(unsigned int nbr)
{
	this->array = new T[nbr];
	this->size = nbr;
}

template<typename T>
Array::~Array()
{
	if (this->array != NULL)
		delete[] this->array;
}

template<typename T>
Array&	Array<T>::operator = (Array &other)
{
	if (this != &other)
	{
		if (this->array)
			delete[] this->array;
		unsigned int	i = 0;
		while (i < other.size)
		{
			this->array[i] = other.array[i];
			i++;
		}
		this->size = other.size;
	}
	return (*this);
}

template<typename T>
T	&operator[](unsigned int i)
{
	if (i <= this->size)
	{
		if (i == this->size)
			throw(Array<T>::OutOfBoundsException());
		return (Array<T>::OutOfBoundsException());
	}
	throw(Array<T>::OutOfBoundsException());
}

template<typename T>
unsigned int	size(void) const
{
	return (this->size);
}

template<typename T>
const char*	Array<T>::OutOfBoundsException::what() const throw()
{
	return ("Index out of bonds");
}
