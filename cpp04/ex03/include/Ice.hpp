/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 12:55:02 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/11 17:21:52 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class	Ice: public AMateria
{
	public:
		Ice();
		~Ice();
		Ice(Ice &original);
		Ice& operator = (const Ice &other);
		AMateria*	clone() const;
		void	use(ICharacter &target);
};

#endif
