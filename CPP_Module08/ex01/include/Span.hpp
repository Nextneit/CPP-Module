/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 16:09:15 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/25 16:54:43 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <iostream>
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
	class SizeLimit : public std::exception
	{
		const char * what() const throw();
	};
};

#endif
