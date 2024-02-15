/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <sboetti@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 10:05:11 by sboetti           #+#    #+#             */
/*   Updated: 2024/02/15 13:16:28 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

// #define RED		"\e[0;31m" // Red
// #define GREEN	"\e[0;32m" // Green
// #define YELLOW	"\e[0;33m" // Yellow
// #define BLUE	"\e[0;34m" // Blue
// #define RESET 	"\e[0m"    // Reset

#define RED     "\033[0;31m" // Red
#define GREEN   "\033[0;32m" // Green
#define YELLOW  "\033[0;33m" // Yellow
#define BLUE    "\033[0;34m" // Blue
#define RESET   "\033[0m"    // Reset

class Animal
{
protected:
	std::string	_type;
public:
	Animal();
	Animal(const Animal & cpy);
	Animal & operator=(Animal const & rhs);
	virtual	~Animal();
	
	std::string	getType(void) const;
	virtual void	makeSound(void) const;
};
