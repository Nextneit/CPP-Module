/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 17:19:25 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/22 18:19:56 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Base.hpp"

Base::Base()
{
}

Base::~Base()
{
}

std::string	Base::getType() const
{
	return ("Base");
}

Base	*generate()
{
	srand(time(0));
	int	i = (rand() % 3);
	switch (i)
	{
		case 1:
			return (Base *b = new A());
		case 2:
			return (Base *b = new B());
		case 3:
			return (Base *b = new C());
	}
}

void	identify(Base *p)
{

}

void	identify(Base &p)
{

}
