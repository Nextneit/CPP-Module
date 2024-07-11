/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 15:45:55 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/06/26 15:41:58 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include ".././include/Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie	*Felipe = new Zombie(name);
	return (Felipe);
}
