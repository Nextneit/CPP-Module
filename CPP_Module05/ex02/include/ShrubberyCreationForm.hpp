/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 10:40:32 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/18 17:39:59 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"

class	ShrubberyCreationForm: public AForm
{
	private:
		std::string	target;
		ShrubberyCreationForm();
	public:
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(ShrubberyCreationForm &original);
		ShrubberyCreationForm&	operator = (ShrubberyCreationForm &other);
		std::string	getTarget();
		class	FormNotSignedException: public std::exception
		{
			public:
				const char	*what() const throw()
				{
					return ("form not signed.");
				}
		};
};

#endif
