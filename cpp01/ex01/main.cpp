/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 16:14:03 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/06/26 15:40:49 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Zombie.hpp"

int	main()
{
	Zombie	*first_z = zombieHorde(5, "Mini messi");
	for (int i = 0; i < 5; i++)
		first_z[i].announce();
	delete []first_z;
}
