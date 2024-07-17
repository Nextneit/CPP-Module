/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 10:46:04 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/17 12:22:08 by ncruz-ga         ###   ########.fr       */
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
