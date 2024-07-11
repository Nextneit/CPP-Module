/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 15:45:53 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/06/26 15:41:55 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include ".././include/Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie	Ricardo(name);

	Ricardo.announce();
}
