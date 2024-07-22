/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 17:17:31 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/22 18:06:28 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include "A.hpp"
# include "B.hpp"
# include "C.hpp"
# include <iostream>
# include <stdlib.h>

class	Base
{
	public:
		Base();
		virtual	~Base();
		virtual	std::string	getType() const;
};

Base	*generate();
void	identify(Base *p);
void	identify(Base &p);

#endif
