/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 16:12:09 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/25 16:53:55 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Span.hpp"

int	main()
{
	Span sp(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return (0);
}
