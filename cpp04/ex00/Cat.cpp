/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <sboetti@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 10:23:59 by sboetti           #+#    #+#             */
/*   Updated: 2024/02/13 11:28:00 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal(){
	std::cout << "Cat Default constructor called" << std::endl;
	_type = "Cat";
}

Cat::Cat(const Cat & cpy) : Animal(cpy){
	std::cout << "Cat Copy constructor called" << std::endl;
}

Cat & Cat::operator=(const Cat & rhs){
	Animal::operator=(rhs);
	return (*this);
}

Cat::~Cat(){
	std::cout << "Destructor of Cat is called" << std::endl;
	return ;
}

void	Cat::makeSound(void) const{
	std::cout << "MIAOUUUU" << std::endl;
	return ;
}