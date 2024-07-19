/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 10:38:59 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/19 10:09:59 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONREQUEST_HPP
# define PRESIDENTIALPARDONREQUEST_HPP

# include "AForm.hpp"

class	PresidentialPardonForm: public AForm
{
	private:
		std::string	target;
		PresidentialPardonForm();
	public:
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm &original);
		PresidentialPardonForm&	operator = (PresidentialPardonForm &other);
		std::string	getTarget();
		bool execute(Bureaucrat const &executor) const;
};

#endif
