/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 10:46:04 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/18 15:29:27 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
	this->target = "Default";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
{
	this->target = target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &original): target(original.target)
{
}

RobotomyRequestForm&	RobotomyRequestForm::operator = (RobotomyRequestForm &other)
{
	if (this != &other)
		this->target = &other.target;
	return (*this);
}

std::string	RobotomyRequestForm::getTarget()
{
	return (this->target);
}

bool	RobotomyRequestForm::execute(Bureaucrat const &executor) const
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
