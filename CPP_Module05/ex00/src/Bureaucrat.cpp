/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 11:46:55 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/10/11 13:52:43 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("Default")
{
	this->grade = 150;
}

Bureaucrat::Bureaucrat(std::string const name, int grade): name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->grade = grade;
}

Bureaucrat::~Bureaucrat()
{	
}

Bureaucrat& Bureaucrat::operator = (const Bureaucrat &other)
{
	if (this != &other)
	{
		if (other.grade <= 0)
			throw Bureaucrat::GradeTooHighException();
		else if (other.grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else
			this->grade = other.grade;
	}
	return (*this);
}

Bureaucrat::Bureaucrat(Bureaucrat& original): name (original.name)
{
	if (this != &original)
		*this = original;
}

std::string	Bureaucrat::getName() const
{
	return (this->name);
}

int	Bureaucrat::getGrade() const
{
	return (this->grade);
}

void	Bureaucrat::increment()
{
	if (this->grade -1 < 1)
		throw Bureaucrat::GradeTooHighException();
	this->grade -= 1;
}

void	Bureaucrat::decrement()
{
	if (this->grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade += 1;
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade Too High.");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade Too Low.");
}

std::ostream& operator << (std::ostream& out, const Bureaucrat& b)
{
	return (out << b.getName() << ", bureaucrat grade " << b.getGrade() << "." << std::endl);
}
