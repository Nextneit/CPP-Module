/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 13:18:47 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/05 14:06:17 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class	Brain
{
	private:
		std::string ideas[100];
	public:
		Brain();
		~Brain();
		Brain(const Brain& original);
		Brain&	operator = (const Brain& other);
};

#endif
