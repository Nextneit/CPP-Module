/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 13:23:28 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/24 12:39:52 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/iter.hpp"

int main()
{
	std::cout << "ARRAY TYPE INT\n";
	int arr[] = {1, 2, 3, 4, 5};
	int size = sizeof(arr) / sizeof(arr[0]);
	iter(arr, size, print);
	
	std::cout << "\nARRAY TYPE STRING\n";
	std::string arr1[] = {"hola", "adios", "42", "Malaga", "2024"};
	int size1 = sizeof(arr1) / sizeof(arr1[0]);
	iter(arr1, size1, print);
	
	std::cout << "\nARRAY TYPE DOUBLE\n";
	double arr2[] = {1.1, 1.2, 1.3, 1.4, 1.5};
	int size2 = sizeof(arr2) / sizeof(arr2[0]);
	iter(arr2, size2, print);
	return 0;
}
