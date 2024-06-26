/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 17:41:06 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/06/18 12:44:58 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class	Harl
{
	private:
		void		debug(void);
		void		info(void);
		void		warning(void);
		void		error(void);
		std::string	level[4];
		void		(Harl::*functions[4])(void);
	public:
		Harl();
		void	Complain(int level);
		void	filter(std::string level);
};

#endif