/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 15:45:53 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/06/10 16:11:50 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie	Ricardo(name);

	Ricardo.announce();
}
