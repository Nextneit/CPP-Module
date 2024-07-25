/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 13:22:50 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/25 16:08:05 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/easyfind.hpp"

int	main()
{
	int	const	amounts[]	= { 42, 54, 957, 432, 1234, 0, 754, 16576 };
	size_t const			amounts_size(sizeof(amounts) / sizeof(int));
	std::vector<int> 		nums(amounts, amounts + amounts_size);
	try
	{
		std::vector<int>::iterator it = easyfind(nums, 1);
		std::cout << *it << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
