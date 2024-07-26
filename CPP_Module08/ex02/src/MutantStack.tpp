/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 17:50:45 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/26 12:48:41 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MutantStack.hpp"

template<typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{
}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack &original): std::stack<T>(original)
{
}

template<typename T>
MutantStack<T>&	MutantStack<T>::operator = (const MutantStack &other)
{
	std::stack<T>::operator = (other);
	return (*this);
}

template<typename T>
MutantStack<T>::~MutantStack()
{
}
