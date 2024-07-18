/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 10:46:37 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/18 12:38:01 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
	this->target = "Default";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
{
	this->target = target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &original): target(original.target)
{
}

PresidentialPardonForm&	PresidentialPardonForm::operator = (PresidentialPardonForm &other)
{
	if (this != &other)
		this->target = &other.target;
	return (*this);
}
