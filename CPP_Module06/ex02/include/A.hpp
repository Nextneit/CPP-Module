/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 17:18:57 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/23 13:13:52 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
# define A_HPP

# include "Base.hpp"
# include <iostream>

class	A : public Base
{
	private:
		std::string	type;
	public:
		A();
		~A();
		std::string	getType() const;
};

#endif
