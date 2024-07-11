/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:08:04 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/06/13 11:36:07 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Replace.hpp"

int	Replace::replace(std::string filename, std::string s1, std::string s2)
{
	std::ifstream	inputFile(filename.c_str());
	std::string		newFile = filename + ".replace";
	std::ofstream	outputFile(newFile.c_str());
	std::string		line;
	size_t			ptr;
	
	if (!inputFile.is_open())
	{
		std::cout << "Can't open file\n";
		return (1);
	}
	if (!outputFile.is_open())
	{
		std::cout << "Can't create output file\n";
		return (1); 
	}
	while (getline(inputFile, line))
	{
		ptr = 0;
		while ((ptr = line.find(s1, ptr)) != std::string::npos)
		{
			line.erase(ptr, s1.length());
			line.insert(ptr, s2);
			ptr += s2.length();
		}
		outputFile << line << std::endl;
	}
	outputFile.close();
	inputFile.close();
	return (0);
}
