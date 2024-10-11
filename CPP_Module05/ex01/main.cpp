/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 11:45:32 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/10/08 18:41:10 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Bureaucrat.hpp"
#include "./include/Form.hpp"
int main()
{
	Bureaucrat *e = NULL;
	Form *f1 = NULL;
	try
	{
		Bureaucrat a("Bureaucrat1", 100);
		Bureaucrat b("Bureaucrat2", 101);
		Bureaucrat c;
		Bureaucrat d(b);
		e = new Bureaucrat(a);
		f1 = new Form("F1", 150, 100);
		Form f2("F2", 100, 75);
		std::cout << "a: " << a << "\n";
		std::cout << "b: " << b << "\n";
		std::cout << "c: " << c << "\n";
		d.decrement_grade();
		std::cout << "d: " << d << "\n";
		e->increment_grade();
		std::cout << "e: " << *e << "\n";
		std::cout << *f1 << "\n";
		std::cout << f2 << "\n";
		a.signForm(*f1);
		b.signForm(*f1);
		b.signForm(f2);
		a.signForm(f2);
		std::cout << *f1 << "\n";
		std::cout << f2 << "\n";
		while (a.getGrade() <= 151)
			a.decrement_grade();
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << "\n";
	}
	delete e;
	delete f1;
}
