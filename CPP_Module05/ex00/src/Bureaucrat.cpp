/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 11:46:55 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/15 17:00:47 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	this->name = "Default";
	this->grade = 1;
}

Bureaucrat::Bureaucrat(std::string const name, int grade)
{
	this->name = name;
	if (grade < 1)
		throw std::runtime_error("GradeToLowException");
	else if (grade > 150)
		throw std::runtime_error("GradeToHighException");
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
		this->name = other.name;
		this->grade = other.grade;
	}
	return (*this);
}

std::ostream& operator << (std::ostream& out, const Bureaucrat& b)
{
	return (out << getName() << ", bureaucrat grade " << getGrade() << "." << std::endl);
}
