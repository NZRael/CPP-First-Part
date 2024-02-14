/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <sboetti@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 12:04:00 by sboetti           #+#    #+#             */
/*   Updated: 2024/01/24 12:04:00 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie* horde = zombieHorde(1, "LucLeBizon");

	for(int i = 0; i < 1; i+=1)
		horde[i].announce();

	Zombie* horde2 = zombieHorde(6, "SoheilLeBizon");
	for(int i = 0; i < 6; i+=1)
		horde2[i].announce();

	Zombie* horde3 = zombieHorde(3, "KCLeBizon");
	for(int i = 0; i < 3; i+=1)
		horde3[i].announce();

	delete[] horde;
	delete[] horde2;
	delete[] horde3;
	return 0;
}
