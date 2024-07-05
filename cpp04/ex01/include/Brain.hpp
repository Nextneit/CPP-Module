/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 13:18:47 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/05 13:27:16 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

class	Brain
{
	protected:
		std::string[100] ideas;
	public:
		Brain();
		~Brain();
		Brain(const Brain& original);
		Brain&	operator = (const Brain& other);
};

#endif
