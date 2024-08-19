/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PMergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 16:33:15 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/08/19 18:07:15 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <vector>
# include <list>
# include <sys/time.h>
# include <algorithm>
# include <string>

class	PMergeMe
{
	private:
		std::list<long int>		list;
		std::vector<long int>	vect;
		int						len;
		PMergeMe();
	public:
		PMergeMe(char **arg);
		~PMergeMe();
		PMergeMe&	operator = (const PMergeMe& other);
		PMergeMe(const PMergeMe& original);
		void	printlist();
		void	sortList();
		int		getLen();
	class	NotANumber : public std::exception
	{
		const char	*what() const throw()
		{
			return ("Error: not a number");
		}
	};	
};

#endif
