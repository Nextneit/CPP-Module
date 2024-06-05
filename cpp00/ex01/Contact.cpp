/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 14:27:52 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/06/05 16:26:52 by ncruz-ga         ###   ########.fr       */
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
