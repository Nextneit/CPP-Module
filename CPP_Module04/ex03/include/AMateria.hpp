/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 15:06:04 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/11 16:29:04 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class	ICharacter;

class	AMateria
{
	protected:
		std::string type;
	public:
		AMateria();
		AMateria(AMateria &original);
		AMateria& operator = (const AMateria &other);
		virtual ~AMateria();
		AMateria(std::string const & type);
		std::string const &getType() const;
		void	setType(std::string type);
		virtual AMateria* clone() const = 0;
		virtual void	use(ICharacter &target);
};

#endif
