/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 17:22:01 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/08 17:28:03 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	protagonist("Tarnished");

	protagonist.takeDamage(9);
	protagonist.beRepaired(10);
	protagonist.takeDamage(1);
	protagonist.guardGate();
	protagonist.highFivesGuys();
	protagonist.whoAmI();
	protagonist.attack("Maliketh");
	DiamondTrap _2 = protagonist;
}
