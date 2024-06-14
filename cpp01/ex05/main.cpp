/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 17:39:22 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/06/14 13:13:15 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Harl.hpp"

int	main()
{
	Harl	harl;
	
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
