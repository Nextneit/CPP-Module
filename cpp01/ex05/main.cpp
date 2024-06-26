/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 17:39:22 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/06/26 15:59:14 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	harl;

	(void)argv;
	if (argc > 1)
	{
		std::cout << "Error: incorrect argument" << std::endl;
		return (1);
	}
	std::cout << "DEBUG level: " << std::endl;
	harl.Complain("DEBUG");
	std::cout << "INFO level: " << std::endl;
	harl.Complain("INFO");
	std::cout << "WARNING level: " << std::endl;
	harl.Complain("WARNING");
	std::cout << "ERROR level: " << std::endl;
	harl.Complain("ERROR");
	std::cout << "Invalid level: " << std::endl;
	harl.Complain("NOT_A_LEVEL");
}
