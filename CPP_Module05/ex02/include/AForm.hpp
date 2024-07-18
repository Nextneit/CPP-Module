/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 15:24:44 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/18 17:43:44 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class	Bureaucrat;

class	AForm
{
	private:
		std::string const name;
		const int	grade_to_sign;
		const int	grade_to_exe;
		bool		sign;
	public:
		AForm();
		AForm(std::string const name, int grade_to_sign, int grade_to_exe);
		AForm(AForm& original);
		virtual ~AForm();
		AForm& operator = (const AForm &other);
		std::string	getName();
		int	getSignGrade();
		int	getExeGrade();
		void	beSigned(Bureaucrat &b);
		virtual bool execute(Bureaucrat const &executor) const = 0;
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

std::ostream& operator << (std::ostream& out, AForm& f);

#endif
