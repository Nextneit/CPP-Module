/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 10:46:04 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/08/28 11:33:06 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("Default", 72, 45)
{
	this->target = "Default";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyRequestForm", 72, 45)
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
		this->target = other.target;
	return (*this);
}

std::string	RobotomyRequestForm::getTarget()
{
	return (this->target);
}

bool	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	bool	exe = false;
	try
	{
		srand(time(0));
		int i = rand() % 2; 
		if (!this->getIsSigned())
			throw AForm::FormNotSignedException();
		else if (executor.getGrade() > this->getExeGrade())
			throw AForm::GradeTooLowException();
		if (i)
			std::cout << target << " has been robotomized." << std::endl;
		else
			std::cout << this->target << " has not been robotomized." << std::endl;
		exe = true;
		return (exe);
	}
	catch (const std::exception &e)
	{
		return (exe);
	}
}
