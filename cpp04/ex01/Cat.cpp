/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <sboetti@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 10:23:59 by sboetti           #+#    #+#             */
/*   Updated: 2024/02/15 13:18:02 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal(), _brain(new Brain){
	std::cout << "Cat Default constructor called" << std::endl;
	_type = "Cat";
}

Cat::Cat(const Cat & cpy) : Animal(cpy), _brain(new Brain(*cpy._brain)){
	std::cout << "Cat Copy constructor called" << std::endl;
	*this = cpy;
}

Cat & Cat::operator=(const Cat & rhs){
	delete _brain;
	_brain = new Brain(*rhs._brain);
	Animal::operator=(rhs);
	return (*this);
}

Cat::~Cat(){
	std::cout << "Destructor of Cat is called" << std::endl;
	delete _brain;
	return ;
}

void	Cat::makeSound(void) const{
	std::cout << "MIAOUUUU" << std::endl;
	return ;
}
