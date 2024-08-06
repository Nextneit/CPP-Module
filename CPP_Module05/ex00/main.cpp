/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 11:45:32 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/08/06 13:03:29 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Bureaucrat.hpp"

int main()
{
	Bureaucrat *b1 = NULL;
	Bureaucrat *b2 = NULL;
	Bureaucrat *b3 = NULL;
	try
	{
		b1 = new Bureaucrat("Pedro Sanchez", 145);
		b2 = new Bureaucrat("Rajoy", 1);
		b3 = new Bureaucrat(*b1);
		std::cout << "b3 :" << *b3 <<std::endl;
		*b3 = *b2;
		std::cout << "b3 :" << *b3 <<std::endl;
		std::cout << "b1: " << *b1 << std::endl << "b2: " << *b2 << std::endl;
		b1->decrement();
		b2->decrement();
		std::cout << "b1: " << *b1 << std::endl << "b2: " << *b2 << std::endl;
		b1->increment();
		b2->increment();
		std::cout << "b1: " << *b1 << std::endl << "b2: " << *b2 << std::endl;
		b2->increment();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	delete b1;
	delete b2;
	delete b3;
}
