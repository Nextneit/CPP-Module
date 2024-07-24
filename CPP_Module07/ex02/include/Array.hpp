/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:04:15 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/24 18:08:38 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include "../src/Array.tpp"

template<typename T>

class	Array
{
	private:
		T				*array;
		unsigned int	size;
	public:
		Array();
		Array(Array &original);
		Array(unsigned int nbr);
		~Array();
		Array&	operator = (Array &other);
		T	&operator[](unsigned int i);
		unsigned int	size(void) const;
		class	OutOfBoundsException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

#endif
