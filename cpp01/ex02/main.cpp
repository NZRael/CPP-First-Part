/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <sboetti@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 16:49:35 by sboetti           #+#    #+#             */
/*   Updated: 2024/01/24 16:49:35 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*ptr = &str;
	std::string &ref = str;

	std::cout << "str adress : " << &str << std::endl;
	std::cout << "ptr adress: " << ptr << std::endl;
	std::cout << "ref adress: " << &ref << std::endl;

	std::cout << std::endl;

	std::cout << "str value: " << str << std::endl;
	std::cout << "ptr vlaue: " << *ptr << std::endl;
	std::cout << "ref value: " << ref << std::endl;
	return (0);
}