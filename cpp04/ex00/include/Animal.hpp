/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:07:42 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/04 18:21:41 by ncruz-ga         ###   ########.fr       */
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
		~Animal();
		Animal(const Animal& original);
		Animal&	operator = (const Animal& other);
		std::string	getType() const;
		void	makeSound() const;
};

#endif
