/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 11:46:53 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/08/27 18:04:23 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "AForm.hpp"

class	AForm;

class   Bureaucrat
{
    private:
        std::string const name;
        int	grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(Bureaucrat& original);
		~Bureaucrat();
		Bureaucrat& operator = (const Bureaucrat &other);
		std::string	getName() const;
		int			getGrade() const;
		void	increment();
		void	decrement();
		void	signForm(AForm &f);
		void	executeForm(AForm const &f);
		class	GradeTooHighException: public std::exception
		{
			public:
				const char	*what() const throw()
				{
					return ("Grade Too High.");
				}
		};
		class	GradeTooLowException: public std::exception
		{
			public:
				const char	*what() const throw()
				{
					return ("Grade Too Low.");
				}
		};
};

std::ostream& operator << (std::ostream& out, const Bureaucrat& b);

#endif
