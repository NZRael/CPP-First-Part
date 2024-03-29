/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <sboetti@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 10:24:31 by sboetti           #+#    #+#             */
/*   Updated: 2024/02/13 15:23:09 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
private:
	Brain	*_brain;
public:
	Cat();
	Cat(const Cat & cpy);
	Cat & operator=(const Cat & rhs);
	~Cat();

	void	makeSound() const;
};
