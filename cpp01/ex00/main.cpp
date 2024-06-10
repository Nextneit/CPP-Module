/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 15:43:47 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/06/10 16:10:24 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	Manuel("Zisquito");
	
	Manuel.announce();
	Zombie *Jese = newZombie("Mini Cr7");
	Jese->announce();
	randomChump("Bojan");
	delete Jese;
}
