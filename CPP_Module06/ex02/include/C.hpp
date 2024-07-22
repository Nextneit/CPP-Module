/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 17:18:51 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/22 17:35:21 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_HPP
# define C_HPP

#include "Base.hpp"

class	C: public Base
{
	private:
		std::string	type;
	public:
		C();
		~C();
		std::string	getType();
};

#endif
