/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 10:46:37 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/08/28 11:34:48 by ncruz-ga         ###   ########.fr       */
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
	bool exe = false;
	try
	{
		if (!this->getIsSigned())
			throw AForm::FormNotSignedException();
		else if (executor.getGrade() > this->getExeGrade())
			throw AForm::GradeTooLowException();
		std::cout << this->target << " has been pardoned." << std::endl;
		exe = true;
		return (true);
	}
	catch (const std::exception &e)
	{
		return (exe);
	}
}
