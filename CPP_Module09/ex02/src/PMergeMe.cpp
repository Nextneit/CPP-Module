/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PMergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 16:33:18 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/08/20 16:15:38 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PMergeMe.hpp"

PMergeMe::PMergeMe()
{
}

PMergeMe::~PMergeMe()
{
}

PMergeMe::PMergeMe(const PMergeMe& original)
{
	this->vect = original.vect;
	this->list = original.list;
	this->len = original.len;
}

PMergeMe&	PMergeMe::operator = (const PMergeMe &other)
{
	if (this != &other)
	{
		this->vect = other.vect;
		this->list = other.list;
		this->len = other.len;
	}
	return (*this);
}

PMergeMe::PMergeMe(char **arg)
{
	int			i = 1;
	int			j = 0;
	long int	nbr = 0;

	while (arg[i])
	{
		while (arg[i][j])
		{
			if (isdigit(arg[i][j]) == 0)
				throw NotANumber();
			j++;
		}
		j = 0;
		nbr = atol(arg[i]);
		if (std::find(this->list.begin(), this->list.end(), nbr) == this->list.end() && nbr >= 0)
		{
			this->vect.push_back(nbr);
			this->list.push_back(nbr);
		}
		i++;
	}
	len = i;
}

void	PMergeMe::printlist()
{
	std::list<long int>::const_iterator it = this->list.begin();
	while (it != this->list.end())
	{
		std::cout << *it << " ";
		it++;
	}
	std::cout << std::endl;
}



void	sortList(std::list<long int>::iterator	b_it, std::list<long int>::iterator	e_it)
{
	if (std::distance(b_it, e_it) > 1)
	{
		std::list<long int>::iterator	m_it = b_it;
		std::advance(m_it, std::distance(b_it, e_it) / 2);
		
	}
}

int		PMergeMe::getLen()
{
	return (this->len);
}
