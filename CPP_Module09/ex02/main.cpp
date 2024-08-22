/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 16:33:20 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/08/22 17:20:45 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/PMergeMe.hpp"

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cerr << "Error: incorrect number of arguments" << std::endl;
		return (1);
	}
	try
	{
		PMergeMe	p(argv);
		std::cout << "Before: ";
		p.printlist();
		
		struct timeval	start;
		gettimeofday(&start, NULL);
		
		p.SortList();

		struct timeval	end;
		gettimeofday(&end, NULL);
		
		std::cout << "After: ";
		p.printlist();
		long	timelist = end.tv_usec - start.tv_usec;
		std::cout << "time to process a range of "<< p.getLen() << " elements with std::list : " << timelist << " us." << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}
	return (0);
}
