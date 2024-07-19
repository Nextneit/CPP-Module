/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 10:40:01 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/19 10:50:24 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"
# include <cstdlib>

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
		bool execute(Bureaucrat const &executor) const;
};

#endif
