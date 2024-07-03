/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 17:22:01 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/03 17:24:41 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/ScavTrap.hpp"

int	main(void)
{
	ScavTrap	protagonist("Tarnished");

	protagonist.attack("Maliketh");
	protagonist.takeDamage(9);
	protagonist.beRepaired(10);
	protagonist.takeDamage(1);
	protagonist.guardGate();
}
