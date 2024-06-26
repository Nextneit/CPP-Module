/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 17:14:57 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/06/26 16:59:23 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include ".././include/Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;
}

std::string&	Weapon::getType()
{
	std::string	&str = this->type;
	return (str);
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}
