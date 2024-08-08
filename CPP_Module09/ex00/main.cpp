/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 12:51:33 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/08/08 12:07:00 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/BitcoinExchange.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Error: incorrect number of arguments." << std::endl;
		return (1);
	}
	std::string str = "data.csv";
	std::string arg = argv[1];
	BitcoinExchange	data(str, arg);
	return (0);
}
