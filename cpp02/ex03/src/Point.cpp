/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 15:36:45 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/06/20 16:01:15 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Point.hpp"

Point::Point()
{
	this->x = 0;
	this->y = 0;
}

Point::Point(const float nbr, const float nbr2)
{
	this->x = nbr;
	this->y = nbr2;
}

Point::Point(const Point& other)
{
	this->x = other.x;
	this->y = other.y;
}

Point::~Point()
{
	
}

Point&	Point::operator = (const Point& other)
{
	(void)other;
	return (*this);
}

Fixed	Point::getX(void) const
{
	return (this->x);
}

Fixed	Point::getY(void) const
{
	return (this->y);
}
