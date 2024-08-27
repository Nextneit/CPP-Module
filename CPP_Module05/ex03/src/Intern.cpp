/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 12:56:39 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/08/27 18:07:06 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &original)
{
	if (this != &original)
		*this = original;
}

Intern&	Intern::operator = (const Intern &other)
{
	(void) other;
	return (*this);
}

Intern::~Intern()
{
}

AForm*	Intern::makeForm(std::string s, std::string name)
{
	AForm	*f = NULL;
	std::string	opt[3] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};
	int	i = 0;
	while (i < 3)
	{
		if (s == opt[i])
			break ;
		i++;
	}
	switch (i)
	{
		case 0:
		{
			f = new PresidentialPardonForm(name);
			std::cout << "Intern created: " << std::endl << *f << std::endl;
			return (f);
		}
		case 1:
		{
			f = new RobotomyRequestForm(name);
			std::cout << "Intern created: " << std::endl << *f << std::endl;
			return (f);
		}
		case 2:
		{
			f = new ShrubberyCreationForm(name);
			std::cout << "Intern created: " << std::endl << *f << std::endl;
			return (f);
		}
		default:
			std::cout << "Incorrect form." << std::endl;
	}
	return (f);
}
