/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 14:47:00 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/25 16:06:26 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/easyfind.hpp"

const char *	NotFound::what() const throw()
{
	return ("Not found");
}

template<typename T>
typename T::iterator	easyfind(T &cont, int value)
{
	typename T::iterator	it;
	it = std::find(cont.begin(), cont.end(), value);
	if (it != cont.end())
		return (it);
	else
		throw NotFound();
}
