/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 15:24:40 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/17 11:26:40 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AForm.hpp"

AForm::AForm(): name("Default"), grade_to_sign(1), grade_to_exe(1), sign(false)
{
}

AForm::AForm(std::string const name, int grade_to_sign, int grade_to_exe): name(name), grade_to_sign(grade_to_sign), grade_to_exe(grade_to_exe)
{
	if (grade_to_sign < 1 || grade_to_exe < 1)
		throw AForm::GradeTooLowException();
	else if (grade_to_sign > 150 || grade_to_exe > 150)
		throw AForm::GradeTooHighException();
	this->sign = false;
}

AForm::AForm(AForm& original): name(original.name), grade_to_sign(original.grade_to_sign), grade_to_exe(original.grade_to_exe), sign(original.sign)
{
	if (grade_to_sign < 1 || grade_to_exe < 1)
		throw AForm::GradeTooLowException();
	else if (grade_to_sign > 150 || grade_to_exe > 150)
		throw AForm::GradeTooHighException();
}

AForm& AForm::operator = (const AForm &other)
{
	if (this != &other)
	{
		if (other.grade_to_sign < 1 || other.grade_to_exe < 1)
			throw AForm::GradeTooLowException();
		else if (other.grade_to_sign > 150 || other.grade_to_exe > 150)
			throw AForm::GradeTooHighException();
		this->sign = other.sign;
	}
	return (*this);
}

AForm::~AForm()
{	
}

std::string	AForm::getName() const
{
	return (this->name);
}

int	AForm::getSignGrade() const
{
	return (this->grade_to_sign);
}

int	AForm::getExeGrade() const
{
	return (this->grade_to_exe);
}

bool	AForm::getIsSigned() const
{
	return (this->sign);
}

std::ostream& operator << (std::ostream& out, AForm& f)
{
	return (out << "Name: " << f.getName() << std::endl << "Sign grade: " << f.getSignGrade() << std::endl << "Exe grade: " << f.getExeGrade() << std::endl);
}

void	AForm::beSigned(Bureaucrat &b)
{
	if (this->grade_to_sign < b.getGrade())
		throw AForm::GradeTooLowException();
	else
		this->sign = true;
}
