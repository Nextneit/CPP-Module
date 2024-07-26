/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 17:50:42 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/26 12:46:43 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <exception>
# include <stack>

template<typename T>
class	MutantStack: public std::stack<T>
{
	public:
		MutantStack();
		MutantStack(const MutantStack &original);
		MutantStack&	operator = (const MutantStack &other);
		~MutantStack();
		typedef	typename std::stack<T>::container_type::iterator	iterator;
		iterator	begin()
		{
			return (this->c.begin());
		}
		iterator	end()
		{
			return (this->c.end());
		}
			
};

# include "../src/MutantStack.tpp"
#endif
