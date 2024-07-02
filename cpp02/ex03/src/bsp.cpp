/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 15:17:39 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/02 18:17:22 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	length1, length2;
	Point	d(b.getX() - a.getX(), b.getY() - a.getY());
	Point	e(c.getX() - a.getX(), c.getY() - a.getY());
	
	length1 = (e.getX() * (a.getY() - point.getY()) + e.getY() * (point.getX() - a.getX())) / (d.getX() * e.getY() - d.getY() * e.getX());
	length2 = (point.getY() - a.getY() - length1 * d.getY()) / e.getY();
	if (length1.toFloat() >= 0.0f && length2.toFloat() >= 0.0f && (length1.toFloat() + length2.toFloat()) <= 1.0f)
		return (true);
	return (false);
}
