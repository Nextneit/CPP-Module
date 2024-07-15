/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 11:46:55 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/15 12:33:41 by ncruz-ga         ###   ########.fr       */
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
		throw std::runtime
}

Bureaucrat::~Bureaucrat()
{	
}
