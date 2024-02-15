/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <sboetti@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 09:45:21 by sboetti           #+#    #+#             */
/*   Updated: 2024/02/15 14:01:26 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main( void )
{
	std::cout << BLUE <<
		"------------------------------------------" << std::endl <<
		"               Normal Animal " 			<< std::endl <<
		"------------------------------------------" << std::endl <<
	RESET << std::endl;

	std::cout << GREEN << "----- Constract----- " << RESET << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
    meta->makeSound();
	j->makeSound();
	i->makeSound();

	std::cout << YELLOW << "----- destruct----- " << RESET << std::endl;
	delete	meta;
	delete	j;
	delete	i;

	std::cout << BLUE <<
	"------------------------------------------" << std::endl <<
	"                Wrong Animal " 			<< std::endl <<
	"------------------------------------------" << std::endl <<
	RESET << std::endl;

	std::cout << GREEN << "----- Constract----- " << RESET << std::endl;
	const WrongAnimal* wrongAnimal = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();
	std::cout << wrongAnimal->getType() << " " << std::endl;
	std::cout << wrongCat->getType() << " " << std::endl;
    wrongAnimal->makeSound();
	wrongCat->makeSound();

	std::cout << YELLOW << "----- destruct----- " << RESET << std::endl;
	delete	wrongAnimal;
	delete	wrongCat;
	return	0;
}
