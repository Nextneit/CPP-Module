/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 16:14:19 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/06/10 16:26:27 by ncruz-ga         ###   ########.fr       */
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
		Zombie();
		void	set_name(std::string name);
		~Zombie();
};

Zombie* zombieHorde(int N, std::string name);

#endif