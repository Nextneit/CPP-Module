/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 11:45:32 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/08/06 13:03:53 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Bureaucrat.hpp"
#include "./include/Form.hpp"
int main()
{
	Bureaucrat	*b1 = NULL;
	Bureaucrat	*b2 = NULL;
	Bureaucrat	*b3 = NULL;
	Form		*f1 = NULL;
	Form		*f2 = NULL;
	try
	{
		b1 = new Bureaucrat("Pedro Sanchez", 149);
		b2 = new Bureaucrat("Rajoy", 26);
		b3 = new Bureaucrat(*b1);
		f1 = new Form("B1", 150, 100);
		f2 = new Form("B2", 25, 75);
		
		std::cout << "b3 :" << *b3 <<std::endl;
		*b3 = *b2;
		std::cout << "b3 :" << *b3 <<std::endl;
		b1->decrement();
		b1->signForm(*f1);
		b1->signForm(*f2);
		b2->signForm(*f1);
		b2->increment();
		b2->signForm(*f2);
		std::cout << "\nb1: " << *b1 << std::endl << "b2: " << *b2 << std::endl;
		std::cout << *f1 << std::endl << *f2 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	delete b1;
	delete b2;
	delete b3;
	delete f1;
	delete f2;
}
