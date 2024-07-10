/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 12:55:02 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/10 13:00:58 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

class	Ice
{
	public:
		Ice();
		~Ice();
		Ice(Ice &original);
		Ice& operator = (Ice &other);
		AMateria*	clone() const;
};

#endif
