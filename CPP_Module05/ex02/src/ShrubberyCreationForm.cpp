/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 10:45:40 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/18 12:42:49 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
	this->target = "Default";
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
{
	this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &original): target(original.target)
{
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator = (ShrubberyCreationForm &other)
{
	if (this != &other)
		this->target = &other.target;
	return (*this);
}

std::string	ShrubberyCreationForm::getTarget()
{
	return (this->target);
}
