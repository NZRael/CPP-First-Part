/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <sboetti@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 09:45:21 by sboetti           #+#    #+#             */
/*   Updated: 2024/02/13 15:22:44 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

// #define MAX_ANIMALS 2

// int	main()
// {
// 	Animal* animals[MAX_ANIMALS];
// 	for (int i = 0; i < MAX_ANIMALS; i++)
// 	{
// 		if (i % 2 == 0)
// 			animals[i] = new Dog();
// 		else
// 			animals[i] = new Cat();
// 	}

// 	if (MAX_ANIMALS > 0)
// 	{
// 		Animal* copy = new Dog(*(Dog *)animals[0]);
// 		std::cout << copy->getType() << std::endl;
// 		copy->makeSound();
// 		delete copy;
// 	}

// 	for (int i = 0; i < MAX_ANIMALS; i++)
// 	{
// 		delete animals[i];
// 	}
// }

int main( void )
{
	std::cout << BLUE <<
		"------------------------------------------" << std::endl <<
		"               single test " 			<< std::endl <<
		"------------------------------------------" << std::endl <<

	RESET << std::endl;

	std::cout << GREEN << "----- Construct----- " << RESET << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << YELLOW << "----- Destruct----- " << RESET << std::endl;
	delete j;
	delete i;

	std::cout << BLUE <<
	"------------------------------------------" << std::endl <<
	"                multi test "	 			<< std::endl <<
	"------------------------------------------" << std::endl <<
	RESET << std::endl;

	std::cout << GREEN << "----- Construct----- " << RESET << std::endl;
	const Animal* animals[6] =
	{
		new Dog(), new Dog(), new Dog(),
		new Cat(), new Cat(), new Cat(),
	};

	std::cout << GREEN << "----- MakeSound----- " << RESET << std::endl;
	for (int i =0; i < 6; i++)
		animals[i]->makeSound();

	std::cout << YELLOW << "----- Destruct----- " << RESET << std::endl;
	for (int i = 0; i < 6; i++)
	{
		std::cout << i + 1 << std::endl;
		delete animals[i];
	}

	std::cout << BLUE <<
		"------------------------------------------" << std::endl <<
		"               copy test " 				<< std::endl <<
		"------------------------------------------" << std::endl <<
	RESET << std::endl;

	std::cout << GREEN << "----- Construct----- " << RESET << std::endl;
	Dog dog;
	Dog copyDog = dog;
	Cat cat;
	Cat copyCat = cat;

	std::cout << YELLOW << "----- Destruct----- " << RESET << std::endl;
	return	0;
}

__attribute((destructor))
static void destructor() {
	system("leaks -q main");
}
