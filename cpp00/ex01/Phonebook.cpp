/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 18:29:20 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/06/05 16:47:57 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Phonebook.hpp"

static int	check_nbr(std::string nbr)
{
	int	i;

	i = 0;
	while (nbr[i] != '\0')
	{
		if (isdigit(nbr[i]) == 0)
			return (1);
		i++;
	}
	return (0);
}

void	Phonebook::search_contact()
{
	
}

void	Phonebook::new_contact()
{
	std::string	input;
	static int	i = 0;

	std::cout << "Insert name\n> ";
	if (!std::getline(std::cin, input, '\n'))
		return ;
	while (input[0] == '\0')
	{
		std::cout << "No name added\nInsert name\n> ";
		if (!std::getline(std::cin, input, '\n'))
			return ;
	}
	this->contacts[i].add_name(input);
	std::cout << "Insert last name\n> ";
	if (!std::getline(std::cin, input, '\n'))
		return ;
	while (input[0] == '\0')
	{
		std::cout << "No last name added\nInsert last name\n> ";
		if (!std::getline(std::cin, input, '\n'))
			return ;
	}
	this->contacts[i].add_last_name(input);
	std::cout << "Insert nickname\n> ";
	if (!std::getline(std::cin, input, '\n'))
		return ;
	while (input[0] == '\0')
	{
		std::cout << "No nickname added\nInsert nickname\n> ";
		if (!std::getline(std::cin, input, '\n'))
			return ;
	}
	this->contacts[i].add_nickname(input);
	std::cout << "Insert phone number\n> ";
	if (!std::getline(std::cin, input, '\n'))
		return ;
	while (input[0] == '\0' || check_nbr(input) == 1 || input.length() > 9)
	{
		std::cout << "No phone number added\nInsert phone number\n> ";
		if (!std::getline(std::cin, input, '\n'))
			return ;
	}
	this->contacts[i].add_phone_number(input);
	std::cout << "Insert darkest secret\n> ";
	if (!std::getline(std::cin, input, '\n'))
		return ;
	while (input[0] == '\0')
	{
		std::cout << "No darkest secret added\nInsert darkest secret\n> ";
		if (!std::getline(std::cin, input, '\n'))
			return ;
	}
	this->contacts[i].add_secret(input);
	if (i != 8)
		i++;
	
}

void	Phonebook::init()
{
	this->index = 0;
}
