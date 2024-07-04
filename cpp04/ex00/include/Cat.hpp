/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:17:10 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/04 17:24:26 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class	Cat
{
	public:
		Cat();
		~Cat();
		Cat(const Cat& original);
		Cat&	operator = (const Cat& other);
		void	makeSound();
};

#endif
