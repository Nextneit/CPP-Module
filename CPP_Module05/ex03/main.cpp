/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 11:45:32 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/10/16 18:38:23 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Bureaucrat.hpp"
#include "./include/AForm.hpp"
#include "./include/ShrubberyCreationForm.hpp"
#include "./include/RobotomyRequestForm.hpp"
#include "./include/PresidentialPardonForm.hpp"
#include "./include/Intern.hpp"

int main()
{
	Bureaucrat	*b1 = NULL;
	Bureaucrat	*b2 = NULL;
	AForm		*f1 = NULL;
	AForm		*f2 = NULL;
	AForm		*f3 = NULL;
	ShrubberyCreationForm *s1 = NULL;
	ShrubberyCreationForm *s2 = NULL;
	Intern	random;
	AForm*	rf;
	try
	{
		b1 = new Bureaucrat("Pedro Sanchez", 150);
		b2 = new Bureaucrat("Rajoy", 4);
		f1 = new ShrubberyCreationForm("Albert Rivera");
		f2 = new RobotomyRequestForm("Robocop");
		f3 = new PresidentialPardonForm("Murder");
		
		std::cout << "--------MAIN---------" << std::endl;
		b2->signForm(*f1);
		b1->signForm(*f1);
		b1->executeForm(*f1);
		b2->executeForm(*f1);
		std::cout << std::endl;
		b1->signForm(*f2);
		b2->signForm(*f2);
		b1->executeForm(*f2);
		b2->executeForm(*f2);
		std::cout << std::endl;
		b1->signForm(*f3);
		b1->executeForm(*f3);
		b2->signForm(*f3);
		b2->executeForm(*f3);
		std::cout << std::endl << *f1 << std::endl;
		std::cout << *f2 << std::endl;
		std::cout << *f3 << std::endl;
		std::cout << std::endl;
		rf = random.makeForm("Padadad", "Bender");
		if (rf)
			std::cout << *rf << std::endl << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	delete b1;
	delete b2;
	delete f1;
	delete s1;
	delete s2;
	delete f2;
	delete f3;
}
