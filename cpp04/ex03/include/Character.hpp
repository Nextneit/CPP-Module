/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 12:39:38 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/10 12:44:29 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

class	Character: public ICharacter
{
	private:
		std::string	name;
		AMateria*	inventory[4];
		AMateria*	unequiped[100];
	public:
		Character();
		Character(std::string name);
		Character(Character &original);
		Character& operator = (Character &other);
		~Character();
		std::string const& getName();
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, Character& target);
};

#endif
