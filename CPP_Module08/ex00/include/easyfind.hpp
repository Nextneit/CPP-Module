/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 13:22:47 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/25 16:06:30 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <stdlib.h>
# include <vector>
# include <algorithm>

class	NotFound : public std::exception
{
	public:
		const char *	what() const throw();
};

template<class T>
typename T::iterator	easyfind(T &cont, int value);

# include "../src/easyfind.tpp"
#endif
