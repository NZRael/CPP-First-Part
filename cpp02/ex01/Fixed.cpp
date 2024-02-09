/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <sboetti@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:30:34 by sboetti           #+#    #+#             */
/*   Updated: 2024/02/08 13:57:00 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _vfix(0){
	std::cout << "Default Constructor called." << std::endl;
	return ;
}

Fixed::Fixed(int nb) : _vfix(nb << _bits){
	std::cout << "Int constructor called." << std::endl;
	return ;
}

Fixed::Fixed(float f) : _vfix(roundf(f * (1 << _bits))){
	std::cout << "Float constructor called." << std::endl;
	return ;
}

Fixed::Fixed(Fixed const & src) {
	std::cout << "Copy constructor called." << std::endl;
	*this = src;
	return ;
}

Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed	&Fixed::operator=( Fixed const & rhs){
	std::cout << "Copy assignment operator called." << std::endl;
	this->_vfix = rhs.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const{
	// std::cout << "getRawbits member function called." << std::endl;
	return (this->_vfix);
}

void	Fixed::setRawBits(int const raw){
	this->_vfix = raw;
	return ;
}

float	Fixed::toFloat() const{
	float	value = static_cast<float>(this->_vfix) / (1 << _bits);
	return (value);
}

int	Fixed::toInt() const{
	return (this->_vfix >> _bits);
}

std::ostream &	operator<<(std::ostream & o, Fixed const & i){
	o << i.toFloat();
	return (o);
}
