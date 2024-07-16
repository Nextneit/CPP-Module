/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 15:24:40 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/16 16:47:02 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Form.hpp"

Form::Form(): name("Default")
{
	this->grade_to_sign = 1;
	this->grade_to_exe = 1;
	this->sign = false;
}

Form::Form(std::string const name, int grade): name(name)
{
	if (grade < 1)
		throw Form::GradeToLowException();
	else if (grade > 150)
		throw Form::GradeToHighException();
	else
	{
		this->grade_to_sign = grade;
		this->grade_to_exe = grade;
	}
	this->sign = false;
}

Form::Form(Form& original)
{
	if (this != &original)
		this = &original;
	return (*this);
}

Form& Form::operator = (const Form &other): name(other.name)
{
	if (this != &other)
	{
		if (other.grade_to_sign <= 0)
			throw Form::GradeToLowException();
		else if (other.grade_to_sign > 150)
			throw Form::GradeToHighException();
		else
		{
			this->grade_to_sign = other.grade_to_sign;
			this->grade_to_exe = other.grade_to_exe;
		}
		this->sign = other.sign;
	}
	return (*this);
}

Form::~Form()
{	
}

std::string	Form::getName()
{
	return (this->name);
}

int	Form::getSignGrade()
{
	return (this->grade_to_sign);
}

int	Form::getExeGrade()
{
	return (this->grade_to_exe);
}

const char	*Form::GradeToHighException::what() const throw()
{
	return ("Grade To High.");
}

const char	*Form::GradeToLowException::what() const throw()
{
	return ("Grade To Low.");
}

std::ostream& operator << (std::ostream& out, const Form& f)
{
	return (out << f.getName() << std::endl << f.getSignGrade() << std::endl << f.getExeGrade() << std::endl);
}

void	Form::beSigned(Bureaucrat &b)
{
	if (this->grade_to_sign < b.grade)
		throw Form::GradeToLowException();
	else
		this->sign = true;
}
