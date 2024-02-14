/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <sboetti@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 10:18:23 by sboetti           #+#    #+#             */
/*   Updated: 2024/02/13 15:23:12 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
private:
	Brain	*_brain;
public:
	Dog();
	Dog(const Dog & cpy);
	Dog & operator=(const Dog & rhs);
	~Dog();

	void	makeSound() const;
};
