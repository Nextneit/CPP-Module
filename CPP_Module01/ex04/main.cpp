/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 16:27:31 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/06/26 17:15:31 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Replace.hpp"

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::string	file = argv[1];
		std::string	s1 = argv[2];
		std::string s2 = argv[3];
		if (s1.empty())
		{
			std::cout << "Error: the string s1 can't be empty\n";
			return (1);
		}
		if (Replace::replace(file, s1, s2) == 1)
			return (1);
	}
	else
	{
		std::cout << "Error: incorrect number of arguments\n";
		return (1);
	}
	return (0);
}
