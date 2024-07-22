/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 17:17:31 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/22 17:33:52 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

class	Base
{
	public:
		Base();
		virtual	~Base();
		virtual	std::string	getType();
};

Base	*generate();
void	identify(Base *p);
void	identify(Base &p);

#endif
