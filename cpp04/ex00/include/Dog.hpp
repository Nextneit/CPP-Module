/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:15:57 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/04 17:42:56 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class	Dog
{
	public:
		Dog();
		~Dog();
		Dog(const Dog& original);
		Dog&	operator = (const Dog& other);
		void	makeSound() const;
};

#endif
