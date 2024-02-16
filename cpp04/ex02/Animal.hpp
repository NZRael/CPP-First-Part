/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <sboetti@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 10:05:11 by sboetti           #+#    #+#             */
/*   Updated: 2024/02/16 09:50:02 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

#define RED     "\033[0;31m" // Red
#define GREEN   "\033[0;32m" // Green
#define YELLOW  "\033[0;33m" // Yellow
#define BLUE    "\033[0;34m" // Blue
#define RESET   "\033[0m"    // Reset

class AAnimal
{
protected:
	std::string	_type;
public:
	AAnimal();
	AAnimal(const AAnimal & cpy);
	AAnimal & operator=(AAnimal const & rhs);
	virtual ~AAnimal();
	
	std::string	getType(void) const;
	virtual void	makeSound(void) const = 0;
};
