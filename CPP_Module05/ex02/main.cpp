/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 11:45:32 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/18 18:15:22 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Bureaucrat.hpp"
#include "./include/AForm.hpp"
#include "./include/ShrubberyCreationForm.hpp"
#include "./include/RobotomyRequestForm.hpp"
#include "./include/PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat	*b1 = NULL;
	Bureaucrat	*b2 = NULL;
	Bureaucrat	*b3 = NULL;
	AForm		*f1 = NULL;
	AForm		*f2 = NULL;
	try
	{
		b1 = new Bureaucrat("Pedro Sanchez", 149);
		b2 = new Bureaucrat("Rajoy", 26);
		b3 = new Bureaucrat(*b1);
		f1 = new RobotomyRequestForm("B1", 150, 100);
		f2 = new PresidentialPardonForm("B2", 25, 75);
		
		std::cout << "b3 :" << *b3 <<std::endl;
		*b3 = *b2;
		std::cout << "b3 :" << *b3 <<std::endl;
		b1->decrement();
		b1->signForm(*f1);
		b1->signForm(*f2);
		b2->signForm(*f1);
		b2->increment();
		b2->signForm(*f2);
		std::cout << "\nb1: " << *b1 << "\n" << "b2: " << *b2 << std::endl;
		std::cout << *f1 << "\n" << *f2 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	delete b1;
	delete b2;
	delete b3;
	delete f1;
	delete f2;
}
