/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 17:19:25 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/23 13:20:12 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Base.hpp"
#include "../include/A.hpp"
#include "../include/B.hpp"
#include "../include/C.hpp"

Base::~Base()
{
}

std::string	Base::getType() const
{
	return (this->type);
}

Base	*generate()
{
	Base *b = NULL;
	srand(time(0));
	int	i = (rand() % 3);
	switch (i)
	{
		case 0:
			return (b = new A());
		case 1:
			return (b = new B());
		case 2:
			return (b = new C());
		default:
		{
			std::cout << "Error" << std::endl;
			break ;
		}
	}
	return (NULL);
}

void	identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "Class type A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "Class type B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "Class type C" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		(void)dynamic_cast<A &>(p);
		std::cout << "Type class A" << std::endl;
	}
	catch (const std::exception&)
	{
		try
		{
			(void)dynamic_cast<B &>(p);
			std::cout << "Type class B" << std::endl;
		}
		catch(const std::exception&)
		{
			try
			{
				(void)dynamic_cast<C &>(p);
				std::cout << "Type class C" << std::endl;
			}
			catch (const std::exception&)
			{
				std::cout << "Type class unknown" << std::endl;
			}
		}
	}
}
