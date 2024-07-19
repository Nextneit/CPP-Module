/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 10:46:37 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/19 11:36:24 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm", 25, 5)
{
	this->target = "Default";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("PresidentialPardonForm", 25, 5)
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
		this->target = other.target;
	return (*this);
}

std::string	PresidentialPardonForm::getTarget()
{
	return (this->target);
}

bool	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	try
	{
		if (!this->getIsSigned())
			throw AForm::FormNotSignedException();
		else if (executor.getGrade() > this->getExeGrade())
			throw AForm::GradeToLowException();
		std::cout << this->target << " has been pardoned." << std::endl;
		return (true);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return (false);
	}
}
