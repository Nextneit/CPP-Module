/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 15:24:40 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/17 10:28:47 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Form.hpp"

Form::Form(): name("Default"), grade_to_sign(1), grade_to_exe(1), sign(false)
{
}

Form::Form(std::string const name, int grade_to_sign, int grade_to_exe): name(name), grade_to_sign(grade_to_sign), grade_to_exe(grade_to_exe)
{
	if (grade_to_sign < 1 || grade_to_exe < 1)
		throw Form::GradeToLowException();
	else if (grade_to_sign > 150 || grade_to_exe > 150)
		throw Form::GradeToHighException();
	this->sign = false;
}

Form::Form(Form& original): name(original.name), grade_to_sign(original.grade_to_sign), grade_to_exe(original.grade_to_exe), sign(original.sign)
{
	if (grade_to_sign < 1 || grade_to_exe < 1)
		throw Form::GradeToLowException();
	else if (grade_to_sign > 150 || grade_to_exe > 150)
		throw Form::GradeToHighException();
}

Form& Form::operator = (const Form &other)
{
	if (this != &other)
	{
		if (other.grade_to_sign < 1 || other.grade_to_exe < 1)
			throw Form::GradeToLowException();
		else if (other.grade_to_sign > 150 || other.grade_to_exe > 150)
			throw Form::GradeToHighException();
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

std::ostream& operator << (std::ostream& out, Form& f)
{
	return (out << "Name: " << f.getName() << std::endl << "Sign grade: " << f.getSignGrade() << std::endl << "Exe grade: " << f.getExeGrade() << std::endl);
}

void	Form::beSigned(Bureaucrat &b)
{
	if (this->grade_to_sign < b.getGrade())
		throw Form::GradeToLowException();
	else
		this->sign = true;
}
