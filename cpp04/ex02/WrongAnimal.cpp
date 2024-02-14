/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <sboetti@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 10:52:17 by sboetti           #+#    #+#             */
/*   Updated: 2024/02/13 15:23:17 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("Default"){
	std::cout << "WrongAnimal Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal & cpy){
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
	*this = cpy;
	return ;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal & rhs){
	this->_type = rhs._type;
	return (*this);
}

WrongAnimal::~WrongAnimal(void){
	std::cout << "Destructor of WrongAnimal is called" << std::endl;
	return ;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal sound" << std::endl;
}

std::string	WrongAnimal::getType(void) const{
	return (this->_type);
}
