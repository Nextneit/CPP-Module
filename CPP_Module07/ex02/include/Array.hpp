/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:04:15 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/08/28 11:46:22 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <stdlib.h>

template<typename T>

class	Array
{
	private:
		T				*array;
		unsigned int	_size;
	public:
		Array();
		Array(Array<T> &original);
		Array(unsigned int nbr);
		~Array();
		Array<T>&	operator = (const Array<T> &other);
		T			&operator[](unsigned int i);
		unsigned int	size(void) const;
		class	OutOfBoundsException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

# include "../src/Array.tpp"

#endif
