/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 15:24:44 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/16 17:58:58 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class	Bureaucrat;

class	Form
{
	private:
		std::string const name;
		int const	grade_to_sign;
		int const	grade_to_exe;
		bool	sign;
	public:
		Form();
		Form(std::string const name, int grade_to_sign, int grade_to_exe);
		Form(Form& original);
		~Form();
		Form& operator = (const Form &other);
		std::string	getName();
		int	getSignGrade();
		int	getExeGrade();
		void	beSigned(Bureaucrat &b);
		class	GradeToHighException: public std::exception
		{
			public:
				const char	*what() const throw();
		};
		class	GradeToLowException: public std::exception
		{
			public:
				const char	*what() const throw();
		};
};

std::ostream& operator << (std::ostream& out, const Form& f);

#endif
