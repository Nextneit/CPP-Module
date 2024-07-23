/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 17:18:54 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/23 13:13:55 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
# define B_HPP

# include "Base.hpp"

class	B : public Base
{
	private:
		std::string	type;
	public:
		B();
		~B();
		std::string	getType() const;
};

#endif
