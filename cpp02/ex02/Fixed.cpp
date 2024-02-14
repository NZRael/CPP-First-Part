/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <sboetti@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:30:34 by sboetti           #+#    #+#             */
/*   Updated: 2024/02/13 15:20:18 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _vfix(0){
	std::cout << "Default Constructor called." << std::endl;
	return ;
}

Fixed::Fixed(const int nb) : _vfix(nb << _bits){
	std::cout << "Int constructor called." << std::endl;
	return ;
}

Fixed::Fixed(const float f) : _vfix(roundf(f * (1 << _bits))){
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
	float	value = (float)(this->_vfix) / (1 << _bits);
	return (value);
}

int	Fixed::toInt() const{
	return (this->_vfix >> _bits);
}

std::ostream &	operator<<(std::ostream & o, Fixed const & i){
	o << i.toFloat();
	return (o);
}

/////////////// 6 comparaions /////////////////

bool	Fixed::operator>( Fixed const & rhs) const{
	return (this->_vfix > rhs.getRawBits());
}

bool	Fixed::operator<( Fixed const & rhs) const{
	return (this->_vfix < rhs.getRawBits());
}

bool	Fixed::operator>=( Fixed const & rhs) const{
	return (this->_vfix >= rhs.getRawBits());
}

bool	Fixed::operator<=( Fixed const & rhs) const{
	return (this->_vfix <= rhs.getRawBits());
}

bool	Fixed::operator==( Fixed const & rhs) const{
	return (this->_vfix == rhs.getRawBits());
}

bool	Fixed::operator!=( Fixed const & rhs) const{
	return (this->_vfix != rhs.getRawBits());
}

/////////////// 4 arithmetiques ////////////////

Fixed	Fixed::operator+(Fixed const & rhs) const {
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed	Fixed::operator-(Fixed const & rhs) const {
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed	Fixed::operator*(Fixed const & rhs) const {
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed	Fixed::operator/(Fixed const & rhs) const {
	if (rhs.getRawBits() == 0){
		throw std::runtime_error("Division by zero");
	}
	return Fixed(this->toFloat() / rhs.toFloat());
}

/////////////// 4 increments... ////////////////

Fixed	&Fixed::operator++(void){
	(this->_vfix)++;
	return *this;
}

Fixed	&Fixed::operator--(void){
	(this->_vfix)--;
	return *this;
}

Fixed	Fixed::operator++(int){
	Fixed	tmp(*this);

	(this->_vfix)++;
	return (tmp);
}

Fixed	Fixed::operator--(int){
	Fixed	tmp(*this);

	(this->_vfix)--;
	return (tmp);
}

/////////////// member functions //////////

Fixed	&Fixed::min(Fixed &a, Fixed &b){
	if (a < b)
		return (a);
	else
		return (b);
}
const Fixed	&Fixed::min(const Fixed &a, const Fixed &b){
	if (a < b)
		return (a);
	else
		return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b){
	if (a > b)
		return (a);
	else
		return (b);
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b){
	if (a > b)
		return (a);
	else
		return (b);
}
