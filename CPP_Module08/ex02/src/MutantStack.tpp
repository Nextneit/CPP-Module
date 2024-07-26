/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 17:50:45 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/26 12:38:06 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MutantStack.hpp"

template<typename T>
MutantStack::MutantStack()
{
}

template<typename T>
MutantStack::MutantStack(const MutantStack &original): std::stack<T>(original)
{
}

template<typename T>
MutantStack&	MutantStack::operator = (const MutantStack &other)
{
	std::stack<T>::operator = (other);
	return (*this);
}

template<typename T>
MutantStack::~MutantStack()
{
}
