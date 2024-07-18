/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 10:45:40 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/18 15:29:40 by ncruz-ga         ###   ########.fr       */
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

bool	ShrubberyCreationForm::execute(Bureaucrat const &executor)
{
	try
	{
		if (!this->beSigned())
			throw AForm::FormNotSignedException();
		else if (executor.getGrade() > this->getExeGrade())
			throw AForm::GradeToLowException();
		std::cout << this->target << "has been pardoned." << std::endl;
		return (true);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return (false);
	}
}
