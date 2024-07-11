/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 12:49:15 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/11 16:43:39 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"

class	MateriaSource: public IMateriaSource
{
	private:
		AMateria*	inventory[4];
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource& operator = (MateriaSource &other);
		MateriaSource(MateriaSource &original);
		void		learnMateria(AMateria* m);
		AMateria*	createMateria(std::string const &m);
};

#endif
