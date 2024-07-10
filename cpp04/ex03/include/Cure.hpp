/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 12:56:23 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/10 13:01:35 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

class	Cure
{
	public:
		Cure();
		~Cure();
		Cure(Cure &original);
		Cure& operator = (Cure &other);
		AMateria*	clone() const;
};

#endif
