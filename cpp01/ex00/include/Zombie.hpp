/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 15:46:42 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/06/10 15:58:15 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	private:
		std::string	name;
	public:
		void	announce(void);
		Zombie(std::string name);
		~Zombie();
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

#endif