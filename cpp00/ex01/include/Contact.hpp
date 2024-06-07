/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:10:14 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/06/07 12:56:05 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>

class Contact{
	
	private:
		std::string	name;
		std::string	last_name;
		std::string	nickname;
		std::string	secret;
		std::string	phone;
	public:
		void	add_name(std::string str);
		void	add_last_name(std::string str);
		void	add_nickname(std::string str);
		void	add_phone_number(std::string nbr);
		void	add_secret(std::string str);
		void	print_name();
		void	print_last_name();
		void	print_nickname();
		void	show_contact();
};

#endif