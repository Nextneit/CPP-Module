/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PMergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 16:33:15 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/08/19 11:24:12 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <vector>
# include <list>
# include <sys/time.h>

class	PMergeMe
{
	private:

		PMergeMe();
	public:
		PMergeMe(char **arg);
		~PMergeMe();
		PMergeMe&	operator = (const PMergeMe& other);
		PMergeMe(const PMergeMe& original);
		
};

#endif
