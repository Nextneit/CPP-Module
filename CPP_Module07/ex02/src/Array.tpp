/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 18:01:00 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/24 18:11:05 by ncruz-ga         ###   ########.fr       */
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
	{
		int	i = 0;
		while (i < this->size)
		{
			delete array[i];
			i++;
		}
	}
}

template<typename T>
Array&	Array<T>::operator = (Array &other)
{
	
}

template<typename T>
T	&operator[](unsigned int i)
{

}

unsigned int	size(void) const
{
	return (this->size);
}

