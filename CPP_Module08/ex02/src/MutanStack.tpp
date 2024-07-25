/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutanStack.tpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 17:50:45 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/25 18:37:35 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MutantStack.hpp"

template<typename T>
MutanStack::MutanStack()
{
}

template<typename T>
MutanStack::MutanStack(const MutanStack &original): std::stack<T>(original)
{
}

template<typename T>
MutanStack&	MutanStack::operator = (const MutanStack &other)
{
	std::stack<T>::operator = (other);
	return (*this);
}

template<typename T>
MutanStack::~MutanStack()
{
}
