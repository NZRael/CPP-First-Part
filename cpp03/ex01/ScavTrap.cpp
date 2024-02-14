/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <sboetti@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 13:37:54 by sboetti           #+#    #+#             */
/*   Updated: 2024/02/14 15:04:19 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(){
	std::cout << "Default ScavTrap constructor called" << std::endl;
	this->_health = 100;
	this->_energy = 50;
	this->_attacks = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	std::cout << "Constructor ScavTrap surcharged called" << std::endl;
	this->_health = 100;
	this->_energy = 50;
	this->_attacks = 20;
}

ScavTrap::ScavTrap(const ScavTrap & cpy) : ClapTrap(cpy){
	std::cout << "ScavTrap Copy constructor called." << std::endl;
	return ;
}

ScavTrap::~ScavTrap(void){
	std::cout << "ScavTrap Destructor called" << std::endl;
	return ;
}

ScavTrap & ScavTrap::operator=(const ScavTrap & rhs){
	ClapTrap::operator=(rhs);
	return (*this);
}

void	ScavTrap::attack(const std::string & target){
	if (this->_energy <= 0 || this->_health <= 0){
		std::cout << "ScavTrap " << this->_name << " is out of energy or is dead to attack..." << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attacks << " point(s) of damages !" << std::endl;
	this->_energy -= 1;
}

void	ScavTrap::guardGate(void){
	if (this->_energy <= 0 || this->_health <= 0){
		std::cout << "ScavTrap " << this->_name << " is out of energy or is dead to be in Gate keeper mode..." << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " is in Gate keeper mode !" << std::endl;
	return ;
}
