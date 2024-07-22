/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 14:53:33 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/22 11:50:53 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <cstring>
# include <climits>
# include <cstdlib>

enum types
{
	INT,
	CHAR,
	FLOAT,
	DOUBLE,
	PLF,
	PLD,
};

class	ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(ScalarConverter &original);
		ScalarConverter& operator = (ScalarConverter &other);
	public:
		~ScalarConverter();
		void	convert(std::string arg);
		int		getType(std::string arg);
};

#endif
