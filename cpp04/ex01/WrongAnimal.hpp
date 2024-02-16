/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <sboetti@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 10:50:59 by sboetti           #+#    #+#             */
/*   Updated: 2024/02/16 11:41:58 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class WrongAnimal
{
protected:
	std::string	_type;
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal & cpy);
	WrongAnimal & operator=(WrongAnimal const & rhs);
	virtual	~WrongAnimal();
	
	std::string	getType(void) const;
	void	makeSound(void) const;
};
