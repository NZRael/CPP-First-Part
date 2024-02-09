/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <sboetti@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:08:12 by sboetti           #+#    #+#             */
/*   Updated: 2024/02/09 12:00:26 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int	_vfix;
		static const int	_bits = 8;
	public:
		Fixed();
		Fixed(int const nb);
		Fixed(float const f);
		Fixed(Fixed const & src);

		Fixed &	operator=( Fixed const & rhs);

		bool	operator>( Fixed const & rhs)const;
		bool	operator<( Fixed const & rhs)const;
		bool	operator>=( Fixed const & rhs)const;
		bool	operator<=( Fixed const & rhs)const;
		bool	operator==( Fixed const & rhs)const;
		bool	operator!=( Fixed const & rhs)const;

		Fixed operator+( Fixed const & rhs)const;
		Fixed operator-( Fixed const & rhs)const;
		Fixed operator*( Fixed const & rhs)const;
		Fixed operator/( Fixed const & rhs)const;

		Fixed	&operator++(void);
		Fixed	&operator--(void);
		Fixed	operator++(int);
		Fixed	operator--(int);

		~Fixed();

		int	getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;

		static	Fixed&	min(Fixed &a, Fixed &b);
		static	const Fixed&	min(const Fixed &a, const Fixed &b);

		static	Fixed&	max(Fixed &a, Fixed &b);
		static	const Fixed&	max(const Fixed &a, const Fixed &b);
};

std::ostream &	operator<<(std::ostream & o, Fixed const & i);