/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 17:14:55 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/06/10 17:29:44 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Weapon.hpp"
#include "./include/HumanA.hpp"
#include "./include/HumanB.hpp"

int	main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA messi("Messi", club);
		messi.attack();
		club.setType("some other type of club");
		messi.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB ronaldo("Cr7");
		ronaldo.setWeapon(club);
		ronaldo.attack();
		club.setType("some other type of club");
		ronaldo.attack();
	}
	return (0);
}
