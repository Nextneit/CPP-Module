/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 13:03:29 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/05 13:17:32 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		~WrongCat();
		WrongCat(const WrongCat& original);
		WrongCat&	operator = (const WrongCat& other);
		void	makeSound() const;
};

#endif
