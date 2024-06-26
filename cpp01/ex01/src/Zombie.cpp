/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 16:16:45 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/06/26 15:41:16 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include ".././include/Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout << this->name << ": Dead" << std::endl; 
}

void	Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie()
{

}

void	Zombie::set_name(std::string name)
{
	this->name = name;
}
