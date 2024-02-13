/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <sboetti@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 13:37:54 by sboetti           #+#    #+#             */
/*   Updated: 2024/02/12 14:35:51 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(){
	std::cout << "Default constructor called" << std::endl;
	this->_health = 100;
	this->_energy = 50;
	this->_attacks = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	std::cout << "Constructor surcharged called" << std::endl;
	this->_health = 100;
	this->_energy = 50;
	this->_attacks = 20;
}

ScavTrap::ScavTrap(const ScavTrap & cpy) : ClapTrap(cpy){
	return ;
}

ScavTrap::~ScavTrap(void){
	return ;
}

ScavTrap & ScavTrap::operator=(const ScavTrap & rhs){
	ClapTrap::operator=(rhs);
	return (*this);
}

void	ScavTrap::guardGate(void){
	if (this->_energy <= 0 || this->_health <= 0){
		std::cout << "ScavTrap " << this->_name << " is out of energy or is dead to be in Gate keeper mode..." << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " is in Gate keeper mode !" << std::endl;
	return ;
}