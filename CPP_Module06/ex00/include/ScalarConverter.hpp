/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 14:53:33 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/19 17:16:27 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>

class	ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(ScalarConverter &original);
		ScalarConverter& operator = (ScalarConverter &other);
	public:
		void	convert(std::string arg);
		int		getType(std::string arg);
};

#endif
