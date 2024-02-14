/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <sboetti@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:51:56 by sboetti           #+#    #+#             */
/*   Updated: 2024/02/13 15:20:24 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << "Max -> " << Fixed::max( a, b ) << std::endl;
	std::cout << "Min -> " << Fixed::min( a, b ) << std::endl;
	std::cout << (a < b) << std::endl; // 1
	std::cout << (a > b) << std::endl; // 0
	std::cout << (a == b) << std::endl; // 0

	Fixed	t1(10);
	Fixed	t2(5);
	Fixed	t3(8);
	Fixed	t4(0);

	std::cout << (t1 + t2) << std::endl;
	std::cout << (t1 - t2) << std::endl;
	std::cout << (t1 * t2) << std::endl;
	std::cout << (t1 / t3) << std::endl;
	std::cout << (t1 * t4) << std::endl;
	return 0;
}
