/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 20:37:08 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/02 21:02:27 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
	private:
		int num_val;
		static const int frac_bits = 8;

	public:
		Fixed(void);
		Fixed(const Fixed &obj);
		Fixed(const int);
		Fixed(const float);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		Fixed &operator=(const Fixed& obj);
		bool operator>(const Fixed& obj) const;
		bool operator<(const Fixed& obj) const;
		bool operator>=(const Fixed& obj) const;
		bool operator==(const Fixed& obj) const;
		bool operator!=(const Fixed& obj) const;
		float operator+(const Fixed& obj);
		float operator-(const Fixed& obj);
		float operator*(const Fixed& obj);
		float operator/(const Fixed& obj);
		Fixed &operator++(); //prefix
		Fixed &operator--();
		Fixed operator++(int);
		Fixed operator--(int);
		float toFloat( void ) const;
		int toInt( void ) const;
		static Fixed &min(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif
