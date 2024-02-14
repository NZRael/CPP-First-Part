/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <sboetti@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:08:12 by sboetti           #+#    #+#             */
/*   Updated: 2024/02/13 15:19:54 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed
{
	private:
		int	_vfix;
		static const int	_bits;
	public:
		Fixed();
		Fixed(Fixed const & src);
		Fixed &	operator=( Fixed const & rhs);
		~Fixed();

		int	getRawBits(void) const;
		void	setRawBits(int const raw);
};
