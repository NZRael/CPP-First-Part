/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <sboetti@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:10:29 by sboetti           #+#    #+#             */
/*   Updated: 2024/02/14 15:02:41 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(){
	std::cout << "Default FragTrap constructor called" << std::endl;
	this->_health = 100;
	this->_energy = 100;
	this->_attacks = 30;
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
	std::cout << "FragTrap constructor surcharged called" << std::endl;
	this->_health = 100;
	this->_energy = 100;
	this->_attacks = 30;
	return ;
}

FragTrap::FragTrap(const FragTrap & cpy) : ClapTrap(cpy){
	std::cout << "FragTrap Copy constructor called." << std::endl;
	return ;
}

FragTrap::~FragTrap(void){
	std::cout << "FragTrap Destructor called" << std::endl;
	return ;
}

FragTrap & FragTrap::operator=(const FragTrap & rhs){
	ClapTrap::operator=(rhs);
	return (*this);
}

void FragTrap::highFivesGuys(void){
	if (this->_health <= 0){
		std::cout << "FragTrap " << this->_name << " is dead and cannot high five!" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->_name << " high five!" << std::endl;
}
