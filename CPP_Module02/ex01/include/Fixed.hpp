/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 17:23:09 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/06/19 18:18:35 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed
{
	private:
		int					value;
		static const int	fract = 8;
	public:
		Fixed();
		Fixed(const int nbr);
		Fixed(const float nbr);
		Fixed(const Fixed& original);
		Fixed&	operator = (const Fixed& other);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream& operator << (std::ostream& out, const Fixed& nbr);

#endif
