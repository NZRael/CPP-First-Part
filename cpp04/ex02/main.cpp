/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <sboetti@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 09:45:21 by sboetti           #+#    #+#             */
/*   Updated: 2024/02/16 09:52:10 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main( void )
{
	std::cout << BLUE <<
		"------------------------------------------" << std::endl <<
		"               Normal Animal " 			<< std::endl <<
		"------------------------------------------" << std::endl <<
	RESET << std::endl;

	std::cout << GREEN << "----- Constract----- " << RESET << std::endl;
	// const AAnimal* meta = new AAnimal(); 								car classe abstraite donc pas d'inctance
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	// std::cout << meta->getType() << " " << std::endl; 					car classe abstraite donc pas d'inctance
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
    // meta->makeSound(); 													car classe abstraite donc pas d'inctance
	j->makeSound();
	i->makeSound();

	std::cout << YELLOW << "----- destruct----- " << RESET << std::endl;
	// delete	meta;
	delete	j;
	delete	i;
	return	0;
}
