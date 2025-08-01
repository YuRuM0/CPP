/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 20:37:08 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/01 14:12:25 by yulpark          ###   ########.fr       */
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
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		Fixed &operator=(const Fixed& obj);
		bool operator>(const Fixed& obj);
		bool operator<(const Fixed& obj);
		bool operator>=(const Fixed& obj);
		bool operator==(const Fixed& obj);
		bool operator!=(const Fixed& obj);
		Fixed &operator+(const Fixed& obj);
		//Fixed &operator-(const Fixed& obj);
		Fixed &operator*(const Fixed& obj);
		//Fixed &operator/(const Fixed& obj);
		~Fixed();
		float toFloat( void ) const;
		int toInt( void ) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif
