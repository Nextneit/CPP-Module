/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 14:27:52 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/06/06 17:26:14 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Phonebook.hpp"

void	Contact::add_name(std::string str)
{
	this->name = str;
}

void	Contact::add_last_name(std::string str)
{
	this->last_name = str;
}

void	Contact::add_nickname(std::string str)
{
	this->nickname = str;
}

void	Contact::add_phone_number(std::string nbr)
{
	this->phone = nbr;
}

void	Contact::add_secret(std::string str)
{
	this->secret = str;
}

void	Contact::print_name()
{
	int			i;
	int			len;
	std::string	str;

	str = this->name;
	i = 0;
	len = str.length();
	if (len > 10)
	{
		while (i < 9)
		{
			std::cout << str[i];
			i++;
		}
		std::cout << ".";
	}
	else
	{
		while (i < 10 - len)
		{
			std::cout << " ";
			i++;
		}
		i = 0;
		while (i <= len)
		{
			std::cout << str[i];
			i++;
		}
	}
	std::cout << "|";
}

void	Contact::print_last_name()
{
	int			i;
	int			len;
	std::string	str;

	str = this->last_name;
	i = 0;
	len = str.length();
	if (len > 10)
	{
		while (i < 9)
		{
			std::cout << str[i];
			i++;
		}
		std::cout << ".";
	}
	else
	{
		while (i < 10 - len)
		{
			std::cout << " ";
			i++;
		}
		i = 0;
		while (i <= len)
		{
			std::cout << str[i];
			i++;
		}
	}
	std::cout << "|";
}

void	Contact::print_nickname()
{
	int			i;
	int			len;
	std::string	str;

	str = this->nickname;
	i = 0;
	len = str.length();
	if (len > 10)
	{
		while (i < 9)
		{
			std::cout << str[i];
			i++;
		}
		std::cout << ".";
	}
	else
	{
		while (i < 10 - len)
		{
			std::cout << " ";
			i++;
		}
		i = 0;
		while (i <= len)
		{
			std::cout << str[i];
			i++;
		}
	}
	std::cout << "|";
}
