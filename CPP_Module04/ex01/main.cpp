/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:18:29 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/10 15:32:49 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Animal.hpp"
#include "./include/Dog.hpp"
#include "./include/Cat.hpp"
#include "./include/WrongAnimal.hpp"
#include "./include/WrongCat.hpp"

int main()
{
	Animal* animals[4];
	for (int i = 0; i < 4; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	int i = 0;
	while(i < 4)
	{
		animals[i]->makeSound();
		i++;
	}
	int j = 0;
	while (j < 4)
	{
		delete animals[j];
		j++;
	}
	Cat *totus = new Cat();
	Cat *tosus = new Cat();
	*tosus = *totus;
	delete totus;
	delete tosus;
	return 0;
}
