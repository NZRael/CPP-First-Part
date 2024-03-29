/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <sboetti@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 10:18:22 by sboetti           #+#    #+#             */
/*   Updated: 2024/02/13 15:23:10 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal(), _brain(new Brain){
	std::cout << "Dog Default constructor called" << std::endl;
	_type = "Dog";
}

Dog::Dog(const Dog & cpy) : AAnimal(cpy){
	std::cout << "Dog Copy constructor called" << std::endl;
	*this = cpy;
}

Dog & Dog::operator=(const Dog & rhs){
	delete _brain;
	_brain = new Brain(*rhs._brain);
	AAnimal::operator=(rhs);
	return (*this);
}

Dog::~Dog(){
	std::cout << "Destructor of Dog is called" << std::endl;
	delete _brain;
	return ;
}

void	Dog::makeSound(void) const{
	std::cout << "WAF WAF" << std::endl;
	return ;
}
