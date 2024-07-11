/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 17:15:02 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/06/11 12:22:06 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include ".././include/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &w)
{
	this->name = name;
	this->weapon = &w;
}

void	HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}
