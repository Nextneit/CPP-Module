/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PMergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 16:33:18 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/08/19 11:25:20 by ncruz-ga         ###   ########.fr       */
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
	this = original;
}

PMergeMe&	PMergeMe::operator = (const PMergeMe &other)
{
	if (this != &other)
	{
		
	}
	return (*this);
}

PMergeMe::PMergeMe(char **arg)
{

}
