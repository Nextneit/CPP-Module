/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 17:21:55 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/02 16:13:50 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class	ClapTrap
{
	protected:
		std::string	name;
		int			Hp;
		int			Ep;
		int			Ad;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& original);
		ClapTrap&	operator = (const ClapTrap& other);
		~ClapTrap();
		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};

#endif
