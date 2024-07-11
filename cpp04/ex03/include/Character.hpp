/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 12:39:38 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/11 15:46:01 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "Cure.hpp"
# include "Ice.hpp"
# include "ICharacter.hpp"

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
		Character& operator = (const Character &other);
		~Character();
		std::string const & getName() const;
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);
};

#endif
