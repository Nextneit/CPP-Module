/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 13:03:40 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/11 18:19:29 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class	WrongAnimal
{
	protected:
		std::string	type;
	public:
		WrongAnimal();
		WrongAnimal(std::string type);
		virtual ~WrongAnimal();
		WrongAnimal(const WrongAnimal& original);
		WrongAnimal&	operator = (const WrongAnimal& other);
		std::string	getType() const;
		void	makeSound() const;
};

#endif
