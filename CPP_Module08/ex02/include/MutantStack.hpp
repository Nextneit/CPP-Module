/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 17:50:42 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/25 18:32:57 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <exception>
# include <stack>

template<typename T>
class	MutanStack: public std::stack<T>
{
	public:
		typedef	typename std::stack<T>::container_type::iterator	iterator;
		MutantStack();
		MutanStack(const MutanStack &original);
		MutanStack&	operator = (const MutanStack &other);
		~MutanStack();
			
};

# include "../src/MutantStack.tpp"
#endif
