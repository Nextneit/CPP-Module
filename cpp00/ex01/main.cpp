/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 14:59:57 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/06/07 12:45:09 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Phonebook.hpp"

int main(void)
{
	Phonebook	agenda;
	std::string	input;

	agenda.init();
    while(input != "EXIT")
	{
		std::cout << "-ADD" << std::endl;
		std::cout << "-SEARCH" << std::endl;
		std::cout << "-EXIT" << std::endl;
		std::cout << "> ";
		if (!std::getline(std::cin, input, '\n'))
			return (0);
		if (input == "ADD")
			agenda.new_contact();
		if (input == "SEARCH")
			agenda.search_contact();
	}
	return (0);
}
