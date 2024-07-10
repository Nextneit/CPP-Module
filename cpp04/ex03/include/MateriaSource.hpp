/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 12:49:15 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/10 12:54:16 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

class	MateriaSource: public IMateriaSource
{
	private:
		AMateria*	inventory[4];
	public:
		AMateria();
		~AMateria();
		AMateria& operator = (AMateria &other);
		AMateria(AMateria &original);
		void		learnMateria(AMateria* m);
		AMateria*	createMateria(std::string const& m);
}

#endif
