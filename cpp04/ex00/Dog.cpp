/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <sboetti@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 10:18:22 by sboetti           #+#    #+#             */
/*   Updated: 2024/02/13 15:22:09 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal(){
	std::cout << "Dog Default constructor called" << std::endl;
	_type = "Dog";
}

Dog::Dog(const Dog & cpy) : Animal(cpy){
	std::cout << "Dog Copy constructor called" << std::endl;
}

Dog & Dog::operator=(const Dog & rhs){
	Animal::operator=(rhs);
	return (*this);
}

Dog::~Dog(){
	std::cout << "Destructor of Dog is called" << std::endl;
	return ;
}

void	Dog::makeSound(void) const{
	std::cout << "WAF WAF" << std::endl;
	return ;
}
