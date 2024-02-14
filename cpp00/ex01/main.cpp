/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <sboetti@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:33:30 by sboetti           #+#    #+#             */
/*   Updated: 2024/01/04 14:33:30 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main(void)
{
	Phonebook 	phone;
	std::string	str;

	while (str != "EXIT")
	{
		std::cout << "Enter a command : ";
		std::getline(std::cin, str);
		if (str == "ADD")
			phone.add();
		else if (str == "SEARCH")
			phone.search();
		if (std::cin.eof())
		{
			std::cout << std::endl;
			return (0);
		}
	}
	return (0);
}
