/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <sboetti@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 10:05:54 by sboetti           #+#    #+#             */
/*   Updated: 2024/02/13 15:22:29 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Default"){
	std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(const Animal & cpy){
	std::cout << "Animal Copy constructor called" << std::endl;
	*this = cpy;
	return ;
}

Animal	&Animal::operator=(const Animal & rhs){
	this->_type = rhs._type;
	return (*this);
}

Animal::~Animal(void){
	std::cout << "Destructor of Animal is called" << std::endl;
	return ;
}

void	Animal::makeSound() const
{
	std::cout << "Animal sound" << std::endl;
}

std::string	Animal::getType(void) const{
	return (this->_type);
}
