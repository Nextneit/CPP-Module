/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 14:59:57 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/06/04 15:28:09 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Phonebook.hpp"

int main(void)
{
	Phonebook	agenda;
	std::string	input;

    while(1)
	{
		std::cout << "-- ADD --" << std::endl;
		std::cout << "-- SEARCH --" << std::endl;
		std::cout << "-- EXIT --" << std::endl;
		std::cout << ">";
		std::cin >> input;
		std::cout << input << std::endl;
	}
	return (0);
}
