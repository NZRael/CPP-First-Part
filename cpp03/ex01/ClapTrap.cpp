/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <sboetti@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 18:36:28 by sboetti           #+#    #+#             */
/*   Updated: 2024/02/14 15:04:02 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("Default"), _health(10), _energy(10), _attacks(0){
	std::cout << "Default ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _health(10), _energy(10), _attacks(0){
	std::cout << "Constructor ClapTrap surcharged called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & cpy) {
	std::cout << "ClapTrap Copy constructor called." << std::endl;
	*this = cpy;
	return ;
}

ClapTrap	&ClapTrap::operator=( ClapTrap const & rhs){
	this->_name = rhs._name;
	this->_health = rhs._health;
	this->_energy = rhs._energy;
	this->_attacks = rhs._attacks;
	return (*this);
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap Destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string & target){
	if (this->_energy <= 0 || this->_health <= 0){
		std::cout << "ClapTrap " << this->_name << " is out of energy or is dead to attack..." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attacks << " point(s) of damages !" << std::endl;
	this->_energy -= 1;
}

void	ClapTrap::takeDamage(unsigned int amount){
	if (this->_health > amount)
		this->_health -= amount;
	else if (this->_health > 0 )
		this->_health = 0;
	else{
		std::cout << "ClapTrap " << this->_name << " can't take damage he's already dead ..." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " point(s) of damages !" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (this->_energy <= 0 || this->_health <= 0){
		std::cout << "ClapTrap " << this->_name << " is out of energy or is dead to be repaired..." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " is repaired by " << amount << " of his health !" << std::endl;
	this->_energy -= 1;
	this->_health += amount;
}
