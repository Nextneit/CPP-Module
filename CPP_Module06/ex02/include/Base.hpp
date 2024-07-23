/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 17:17:31 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/23 13:17:05 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <stdlib.h>

class	Base
{
	private:
		std::string	type;
	public:
		virtual	~Base();
		virtual std::string	getType() const;
};

Base	*generate();
void	identify(Base *p);
void	identify(Base &p);

#endif
