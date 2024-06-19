/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 17:20:15 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/06/19 18:49:41 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(const int nbr)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = nbr << this->fract;
}

Fixed::Fixed(const float nbr)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(nbr * (1 << this->fract));
}

Fixed::Fixed(const Fixed& original)
{
	std::cout << "Copy constructor called" << std::endl;
	this->value = original.getRawBits();
}

Fixed&	Fixed::operator = (const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	if (this != &other)
		this->value = other.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void	Fixed::setRawBits(int const raw)
{
	this->value = raw;
	std::cout << "setRawBits member function called" << std::endl;
}

int	Fixed::toInt(void) const
{
	return (this->value >> this->fract);
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(this->value) / (1 << this->fract));
}

std::ostream& operator << (std::ostream& out, const Fixed& nbr)
{
	return (out << nbr.toFloat());
}

bool	Fixed::operator > (const Fixed& other)
{
	if (other.value > this->value)
		return (true);
	return (false)
}

bool	Fixed::operator < (const Fixed& other)
{
	if (other.value < this->value)
		return (true);
	return (false)
}

bool	Fixed::operator >= (const Fixed& other)
{
	if (other.value >= this->value)
		return (true);
	return (false)
}

bool	Fixed::operator <= (const Fixed& other)
{
	if (other.value <= this->value)
		return (true);
	return (false)
}

bool	Fixed::operator == (const Fixed& other)
{
	if (this->value == other.value)
		return (true);
	return (false)
}

bool	Fixed::operator != (const Fixed& other)
{
	if (other.value != this->value)
		return (true);
	return (false)
}

Fixed	Fixed::operator + (const Fixed& nbr, const Fixed& nbr2)
{
	return ();
}

Fixed	Fixed::operator - (const Fixed& nbr, const Fixed& nbr2)
{
	return ();
}

Fixed	Fixed::operator * (const Fixed& nbr, const Fixed& nbr2)
{
	return ();
}

Fixed	Fixed::operator / (const Fixed& nbr, const Fixed& nbr2)
{
	return ();
}

Fixed&	Fixed::operator ++ (void)
{

}

Fixed&	Fixed::operator -- (void)
{

}

Fixed	Fixed::operator ++ (int)
{

}

Fixed	Fixed::operator -- (int)
{

}
