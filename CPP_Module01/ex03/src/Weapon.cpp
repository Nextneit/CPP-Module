/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 17:14:57 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/06/28 15:05:01 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include ".././include/Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;
}

const std::string&	Weapon::getType()
{
	std::string	&str = this->type;
	return (str);
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}
