/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 17:14:55 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/06/11 12:23:47 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Weapon.hpp"
#include "./include/HumanA.hpp"
#include "./include/HumanB.hpp"

int	main()
{
	{
		Weapon club = Weapon("copa del rey");
		HumanA messi("Messi", club);
		messi.attack();
		club.setType("copa del mundo");
		messi.attack();
	}
	{
		Weapon club = Weapon("Champions");
		HumanB ronaldo("Cr7");
		ronaldo.setWeapon(club);
		ronaldo.attack();
		club.setType("nadaplete");
		ronaldo.attack();
	}
	return (0);
}
