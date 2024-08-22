/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PMergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 16:33:18 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/08/22 17:19:15 by ncruz-ga         ###   ########.fr       */
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

static void	mergeList(std::list<long int>::iterator b_it, std::list<long int>::iterator e_it, std::list<long int>::iterator m_it)
{
	std::list<long int>				first_half(b_it, m_it);
	std::list<long int>				last_half(m_it, e_it);
	std::list<long int>::iterator	it = b_it;
	std::list<long int>::iterator	fh_it = first_half.begin();
	std::list<long int>::iterator	lh_it = last_half.begin();

	while (fh_it != first_half.end() && lh_it != last_half.end())
	{
		if (*fh_it <= *lh_it)
		{
			*it = *fh_it;
			fh_it++;
		}
		else
		{
			*it = *lh_it;
			lh_it++;
		}
		it++;
	}
	while (fh_it != first_half.end())
	{
		*it = *fh_it;
		fh_it++;
		it++;
	}
	while (lh_it != last_half.end())
	{
		*it = *lh_it;
		lh_it++;
		it++;
	}
}

static void	RecursiveSortList(std::list<long int>::iterator	b_it, std::list<long int>::iterator	e_it)
{
	if (std::distance(b_it, e_it) > 1)
	{
		std::list<long int>::iterator	m_it = b_it;
		std::advance(m_it, std::distance(b_it, e_it) / 2);
		RecursiveSortList(b_it, m_it);
		RecursiveSortList(m_it, e_it);
		mergeList(b_it, e_it, m_it);
	}
}

void	PMergeMe::SortList()
{
	RecursiveSortList(this->list.begin(), this->list.end());
}

int		PMergeMe::getLen()
{
	return (this->len);
}
