/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 13:40:09 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/22 13:42:04 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Serializer.hpp"

Serializer::Serializer()
{	
}

Serializer::Serializer(Serializer &original)
{
	(void)original;
}

Serializer&	Serializer::operator = (Serializer &other);
{
	(void)other;
	return (*this);
}

Serializer::~Serializer()
{
}

