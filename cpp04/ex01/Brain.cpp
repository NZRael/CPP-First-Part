/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <sboetti@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 11:07:30 by sboetti           #+#    #+#             */
/*   Updated: 2024/02/13 15:22:32 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Brain Default constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = "";
	return ;
}

Brain::Brain(const Brain & cpy){
	std::cout << "Brain Copy constructor called" << std::endl;
	*this = cpy;
	return ;
}

Brain	&Brain::operator=(const Brain & rhs){
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = rhs._ideas[i];
	return (*this);
}

Brain::~Brain(void){
	std::cout << "Destructor of Brain is called" << std::endl;
	return ;
}
