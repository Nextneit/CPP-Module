/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 17:20:15 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/06/20 17:18:43 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

Fixed::Fixed()
{
	this->value = 0;
}

Fixed::Fixed(const int nbr)
{
	this->value = nbr << this->fract;
}

Fixed::Fixed(const float nbr)
{
	this->value = roundf(nbr * (1 << this->fract));
}

Fixed::Fixed(const Fixed& original)
{
	this->value = original.getRawBits();
}

Fixed&	Fixed::operator = (const Fixed& other)
{
	if (this != &other)
		this->value = other.getRawBits();
	return (*this);
}

Fixed::~Fixed(){}

int	Fixed::getRawBits(void) const
{
	return (this->value);
}

void	Fixed::setRawBits(int const raw)
{
	this->value = raw;
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
	return (false);
}

bool	Fixed::operator < (const Fixed& other)
{
	if (other.value < this->value)
		return (true);
	return (false);
}

bool	Fixed::operator >= (const Fixed& other)
{
	if (other.value >= this->value)
		return (true);
	return (false);
}

bool	Fixed::operator <= (const Fixed& other)
{
	if (other.value <= this->value)
		return (true);
	return (false);
}

bool	Fixed::operator == (const Fixed& other)
{
	if (this->value == other.value)
		return (true);
	return (false);
}

bool	Fixed::operator != (const Fixed& other)
{
	if (other.value != this->value)
		return (true);
	return (false);
}

Fixed	Fixed::operator + (const Fixed& nbr)
{
	return (Fixed(this->toFloat() + nbr.toFloat()));
}

Fixed	Fixed::operator - (const Fixed& nbr)
{
	return (Fixed(this->toFloat() - nbr.toFloat()));
}

Fixed	Fixed::operator * (const Fixed& nbr)
{
	return (Fixed(this->toFloat() * nbr.toFloat()));
}

Fixed	Fixed::operator / (const Fixed& nbr)
{
	return (Fixed(this->toFloat() / nbr.toFloat()));
}

Fixed&	Fixed::operator ++ (void)
{
	this->value++;
	return (*this);
}

Fixed&	Fixed::operator -- (void)
{
	this->value--;
	return (*this);
}

Fixed	Fixed::operator ++ (int)
{
	Fixed	nbr(*this);

	this->value++;
	return (*this);
}

Fixed	Fixed::operator -- (int)
{
	Fixed	nbr(*this);

	this->value--;
	return (*this);
}

Fixed&	Fixed::min(Fixed& first, Fixed& second)
{
	if (first.getRawBits() < second.getRawBits())
		return (first);
	return (second);
}

Fixed&	Fixed::max(Fixed& first, Fixed& second)
{
	if (first.getRawBits() > second.getRawBits())
		return (first);
	return (second);
}

const Fixed&	Fixed::min(const Fixed& first, const Fixed& second)
{
	if (first.getRawBits() < second.getRawBits())
		return (first);
	return (second);
}

const Fixed&	Fixed::max(const Fixed& first, const Fixed& second)
{
	if (first.getRawBits() > second.getRawBits())
		return (first);
	return (second);
}
