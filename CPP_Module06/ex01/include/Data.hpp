/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 14:16:11 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/22 17:13:38 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>

class	Data
{
	private:
		std::string	name;
	public:
		Data();
		Data(Data &original);
		Data&	operator = (const Data &other);
		~Data();
		std::string	getName() const;
};

#endif
