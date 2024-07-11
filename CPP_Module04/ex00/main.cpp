/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:18:29 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/05 13:14:25 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Animal.hpp"
#include "./include/Dog.hpp"
#include "./include/Cat.hpp"
#include "./include/WrongAnimal.hpp"
#include "./include/WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	const WrongAnimal* k = new WrongAnimal();
	const WrongAnimal* l = new WrongCat();
	std::cout << k->getType() << " " << std::endl;
	std::cout << l->getType() << " " << std::endl;
	k->makeSound();
	l->makeSound();
	delete meta;
	delete j;
	delete i;
	delete k;
	delete l;
	return (0);
}
