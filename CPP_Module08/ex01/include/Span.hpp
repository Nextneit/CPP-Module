/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 16:09:15 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/31 12:56:54 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <iostream>
# include <limits.h>
# include <algorithm>

class	Span
{
	private:
		std::vector<int>	array;
		unsigned int		size;
		Span();
	public:
		Span(Span &original);
		~Span();
		Span&	operator = (const Span &other);
		Span(unsigned int n);
		void	addNumber(int n);
		int		shortestSpan();
		int		longestSpan();
		void	addNumber(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end);
	class SizeLimit : public std::exception
	{
		const char * what() const throw();
	};
	class OneNumber : public std::exception
	{
	const char * what() const throw();
	};
	class NoNumber : public std::exception
	{
		const char * what() const throw();
	};
};

#endif
