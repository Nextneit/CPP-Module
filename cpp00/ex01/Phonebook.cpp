/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 18:29:20 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/06/06 17:23:35 by ncruz-ga         ###   ########.fr       */
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
	int			i;
	std::string	input;

	i = 0;
	if (this->index == 0)
	{
		std::cout << "Empty phonebook\n";
		return ;
	}
	std::cout << " ___________________________________________\n";
	std::cout << "|          |          |          |          |\n";
	std::cout << "|     INDEX|      NAME| LAST NAME|  NICKNAME|\n";
	std::cout << "|__________|__________|__________|__________|\n";
	while (i < this->index)
	{
		std::cout << "|          |          |          |          |\n";
		std::cout << "|         " << i + 1 << "|";
		this->contacts[i].print_name();
		this->contacts[i].print_last_name();
		this->contacts[i].print_nickname();
		std::cout << std::endl;
		std::cout << "|__________|__________|__________|__________|\n";
		i++;
	}
	std::cout << "\nSelect contact\n> ";
	if (!std::getline(std::cin, input, '\n'))
		return ;
	
	return ;
}

void	Phonebook::reorder()
{
	int		i;
	Contact	aux;

	i = 0;
	while (i < 7)
	{
		this->contacts[i] = this->contacts[i + 1];
		i++;
	}
	this->contacts[7] = aux;
}

void	Phonebook::new_contact()
{
	std::string	input;
	static int	i = 0;

	if (i == 8)
	{
		i = 0;
		std::cout << "\nDeleting oldest contact\n\n";
	}
	std::cout << "\nInsert name\n> ";
	if (!std::getline(std::cin, input, '\n'))
		return ;
	while (input[0] == '\0')
	{
		std::cout << "No name added\nInsert name\n> ";
		if (!std::getline(std::cin, input, '\n'))
			return ;
	}
	this->contacts[i].add_name(input);
	std::cout << "\nInsert last name\n> ";
	if (!std::getline(std::cin, input, '\n'))
		return ;
	while (input[0] == '\0')
	{
		std::cout << "No last name added\nInsert last name\n> ";
		if (!std::getline(std::cin, input, '\n'))
			return ;
	}
	this->contacts[i].add_last_name(input);
	std::cout << "\nInsert nickname\n> ";
	if (!std::getline(std::cin, input, '\n'))
		return ;
	while (input[0] == '\0')
	{
		std::cout << "No nickname added\nInsert nickname\n> ";
		if (!std::getline(std::cin, input, '\n'))
			return ;
	}
	this->contacts[i].add_nickname(input);
	std::cout << "\nInsert phone number\n> ";
	if (!std::getline(std::cin, input, '\n'))
		return ;
	while (input[0] == '\0' || check_nbr(input) == 1 || input.length() > 9)
	{
		std::cout << "No phone number added\nInsert phone number\n> ";
		if (!std::getline(std::cin, input, '\n'))
			return ;
	}
	this->contacts[i].add_phone_number(input);
	std::cout << "\nInsert darkest secret\n> ";
	if (!std::getline(std::cin, input, '\n'))
		return ;
	while (input[0] == '\0')
	{
		std::cout << "No darkest secret added\nInsert darkest secret\n> ";
		if (!std::getline(std::cin, input, '\n'))
			return ;
	}
	this->contacts[i].add_secret(input);
	std::cout << std::endl;
	if (i != 8)
		i++;
	if (this->index != 8)
		this->index = i;
	else
		this->reorder();
	
}

void	Phonebook::init()
{
	this->index = 0;
}
