/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <sboetti@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:30:34 by sboetti           #+#    #+#             */
/*   Updated: 2024/02/13 15:19:52 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _vfix(0){
	std::cout << "Constructor called." << std::endl;
	return ;
}

Fixed::Fixed(Fixed const & src) {
	*this = src;
	return ;
}

Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
	return ;
}

int	Fixed::getRawBits(void) const{
	std::cout << "getRawbits member function called." << std::endl;
	return (this->_vfix);
}

void	Fixed::setRawBits(int const raw){
	this->_vfix = raw;
	return ;
}

Fixed	&Fixed::operator=( Fixed const & rhs){
	std::cout << "Copy constructor called." << std::endl;
	this->_vfix = rhs.getRawBits();
	return (*this);
}
