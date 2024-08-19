/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PMergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 16:33:18 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/08/19 17:49:50 by ncruz-ga         ###   ########.fr       */
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
