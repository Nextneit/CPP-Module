/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 10:46:04 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/18 12:36:13 by ncruz-ga         ###   ########.fr       */
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
