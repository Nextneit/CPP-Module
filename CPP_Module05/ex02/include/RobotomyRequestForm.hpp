/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 10:40:01 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/18 17:40:11 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class	RobotomyRequestForm: public AForm
{
	private:
		std::string	target;
		RobotomyRequestForm();
	public:
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm();
		RobotomyRequestForm(RobotomyRequestForm &original);
		RobotomyRequestForm&	operator = (RobotomyRequestForm &other);
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
