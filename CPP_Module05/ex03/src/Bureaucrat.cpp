/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 11:46:55 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/08/06 16:28:36 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("Default")
{
	this->grade = 1;
}

Bureaucrat::Bureaucrat(std::string const name, int grade): name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooLowException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooHighException();
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
			throw Bureaucrat::GradeTooLowException();
		else if (other.grade > 150)
			throw Bureaucrat::GradeTooHighException();
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
		throw Bureaucrat::GradeTooLowException();
	this->grade -= 1;
}

void	Bureaucrat::decrement()
{
	if (this->grade + 1 > 150)
		throw Bureaucrat::GradeTooHighException();
	this->grade += 1;
}

std::ostream& operator << (std::ostream& out, const Bureaucrat& b)
{
	return (out << b.getName() << ", bureaucrat grade " << b.getGrade() << "." << std::endl);
}

void	Bureaucrat::signForm(AForm &f)
{
	try
	{
		if (this->grade <= 0)
			throw Bureaucrat::GradeTooLowException();
		else if (this->grade > 150)
			throw Bureaucrat::GradeTooHighException();
		f.beSigned(*this);
		std::cout << this->name << " signed " << f.getName() << "." << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->name << " couldn't sign " << f.getName() << " because " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const &f)
{
	try
	{
		if (f.execute(*this))
			std::cout << this->getName() << " executed " << f.getName() << "." <<std::endl;
		else
			std::cout << this->getName() << " couldn't execute " << f.getName() << "." << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}
