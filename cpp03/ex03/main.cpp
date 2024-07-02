/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 17:22:01 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/02 18:41:14 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/FragTrap.hpp"

int	main(void)
{
	FragTrap	protagonist("tarnished");

	protagonist.takeDamage(9);
	protagonist.beRepaired(10);
	protagonist.takeDamage(1);
	protagonist.highFivesGuys();
}
