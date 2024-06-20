/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 15:17:43 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/06/20 17:15:22 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include "Fixed.hpp"

class	Point
{
	private:
		const Fixed	x;
		const Fixed y;
	public:
		Point();
		Point(const float nbr, const float nbr2);
		Point(const Point& other);
		Point(Fixed	const x, Fixed const y);
		~Point();
		Point&	operator = (const Point& other);
		Fixed	getX(void) const;
		Fixed	getY(void) const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
