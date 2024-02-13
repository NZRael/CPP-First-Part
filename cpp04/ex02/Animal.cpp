/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <sboetti@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 10:05:54 by sboetti           #+#    #+#             */
/*   Updated: 2024/02/13 12:00:32 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal() : _type("Default"){
	std::cout << "AAnimal Default constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal & cpy){
	std::cout << "AAnimal Copy constructor called" << std::endl;
	*this = cpy;
	return ;
}

AAnimal	&AAnimal::operator=(const AAnimal & rhs){
	this->_type = rhs._type;
	return (*this);
}

AAnimal::~AAnimal(void){
	std::cout << "Destructor of AAnimal is called" << std::endl;
	return ;
}

void	AAnimal::makeSound() const
{
	std::cout << "AAnimal sound" << std::endl;
}

std::string	AAnimal::getType(void) const{
	return (this->_type);
}