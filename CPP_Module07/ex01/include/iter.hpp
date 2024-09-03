/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 12:16:08 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/09/03 18:22:47 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T> void	iter(T *array, int size, void (*f)(T &))
{
	for (int i = 0; i < size; i++)
		f (array[i]);
}

template <typename T> void	print(T &array)
{
	std::cout << array << std::endl;
}

#endif
