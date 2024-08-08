/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 17:20:47 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/08/08 17:34:01 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>

class	RPN
{
	private:

	public:
		RPN();
		RPN(RPN &original);
		~RPN();
		RPN&	operator = (RPN &other);
};

#endif
