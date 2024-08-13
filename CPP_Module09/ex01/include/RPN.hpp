/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 17:20:47 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/08/13 16:19:38 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <stack>
# include <cstdlib>
# include <string>
# include <sstream>

class	RPN
{
	private:
		std::stack<double>	nbrs;
		RPN();
		RPN(RPN &original);
		RPN&	operator = (RPN &other);
	public:
		RPN(std::string arg);
		~RPN();
		int		checkSign(char arg);
		void	calculateRPN(char sign);
		class	InvalidExpresion : public std::exception
		{
			const char	*what() const throw()
			{
				return ("Error: invalid expresion");
			}
		};
		class	Tokens : public std::exception
		{
			const char	*what() const throw()
			{
				return ("Error: not enough tokens");
			}
		};
		class	OneNumber : public std::exception
		{
			const char	*what() const throw()
			{
				return ("Error: only one number");
			}
		};
};

#endif
