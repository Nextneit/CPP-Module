/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:07:42 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/05 14:29:15 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class	Animal
{
	protected:
		std::string	type;
	public:
		Animal();
		Animal(std::string type);
		virtual ~Animal();
		Animal(const Animal& original);
		Animal&	operator = (const Animal& other);
		std::string	getType() const;
		virtual void	makeSound() const = 0;
};

#endif
