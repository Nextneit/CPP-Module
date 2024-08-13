/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 17:20:52 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/08/12 12:30:42 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/RPN.hpp"

int	checkSign(char arg)
{
	if (arg == ' ')
		return (0);
	if (!isdigit(arg) && (arg != '+' || arg != '-' || arg != '*' || arg != '/'))
	{
		std::cerr << "Error: incorrect character in argument" << std::endl;
		return (1);
	}
	return (0);
}

int	checkArg(char *arg)
{
	int	i = 0;

	while (arg[i] != '\0')
	{
		if (!checkSign(arg[i]))
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Error: incorrect number of arguments" << std::endl;
		return (1);
	}
	if (checkArg(argv[1]) == 1)
		return (1);
	return (0);
}
