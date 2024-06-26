/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 16:14:24 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/06/26 15:41:21 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include ".././include/Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie*	horde = new Zombie[N]();

	for (int i = 0; i < N; i++)
	{
		horde[i].set_name(name);
	}
	return (horde);
}
