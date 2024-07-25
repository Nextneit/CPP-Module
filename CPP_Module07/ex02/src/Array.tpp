/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 18:01:00 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/25 13:17:33 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Array.hpp"

template<typename T>
Array<T>::Array(void)
{
	this->array = NULL;
	this->_size = 0;
}

template<typename T>
Array<T>::Array(Array<T> &original)
{
	this->array = new T[original._size];
	unsigned int i = 0;
	while (i < original._size)
	{
		this->array[i] = original.array[i];
		i++;
	}
	this->_size = original._size;
}

template<typename T>
Array<T>::Array(unsigned int nbr)
{
	this->array = new T[nbr];
	this->_size = nbr;
}

template<typename T>
Array<T>::~Array()
{
	if (this->array != NULL)
		delete[] this->array;
}

template<typename T>
Array<T>&	Array<T>::operator = (const Array<T> &other)
{
	if (this != &other)
	{
		if (this->array)
			delete[] this->array;
		unsigned int	i = 0;
		while (i < other._size)
		{
			this->array[i] = other.array[i];
			i++;
		}
		this->_size = other._size;
	}
	return (*this);
}

template<typename T>
T	&Array<T>::operator[](unsigned int i)
{
	if (i <= this->_size)
	{
		if (i == this->_size)
			throw(Array<T>::OutOfBoundsException());
		return (this->array[i]);
	}
	throw(Array<T>::OutOfBoundsException());
}

template<typename T>
unsigned int	Array<T>::size(void) const
{
	return (this->_size);
}

template<typename T>
const char*	Array<T>::OutOfBoundsException::what() const throw()
{
	return ("Index out of bonds");
}
