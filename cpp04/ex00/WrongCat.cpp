/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <sboetti@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 10:53:02 by sboetti           #+#    #+#             */
/*   Updated: 2024/02/13 15:22:20 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal(){
	std::cout << "WrongCat Default constructor called" << std::endl;
	_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat & cpy) : WrongAnimal(cpy){
	std::cout << "WrongCat Copy constructor called" << std::endl;
}

WrongCat & WrongCat::operator=(const WrongCat & rhs){
	WrongAnimal::operator=(rhs);
	return (*this);
}

WrongCat::~WrongCat(){
	std::cout << "Destructor of WrongCat is called" << std::endl;
	return ;
}

void	WrongCat::makeSound(void) const{
	std::cout << "MIAOUUUU" << std::endl;
	return ;
}
