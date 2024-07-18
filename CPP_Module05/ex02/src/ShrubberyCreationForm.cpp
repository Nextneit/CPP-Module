/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 10:45:40 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/18 15:45:49 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
	this->target = "Default";
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
{
	this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &original): target(original.target)
{
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator = (ShrubberyCreationForm &other)
{
	if (this != &other)
		this->target = &other.target;
	return (*this);
}

std::string	ShrubberyCreationForm::getTarget()
{
	return (this->target);
}

bool	ShrubberyCreationForm::execute(Bureaucrat const &executor)
{
	try
	{
		if (!this->beSigned())
			throw AForm::FormNotSignedException();
		else if (executor.getGrade() > this->getExeGrade())
			throw AForm::GradeToLowException();
		std::string name(this->target + "_shrubbery");
		std::ofstream out(name.c_str());
		out << "               ,@@@@@@@," << std::endl;
		out << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
		out << "       ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
		out << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
		out << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
		out << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
		out << "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
		out << "       |o|        | |         | |" << std::endl;
		out << "       |.|        | |         | |" << std::endl;
		out << "   .\\. \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_" << std::endl;
		out.close();
		return (true);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return (false);
	}
}
