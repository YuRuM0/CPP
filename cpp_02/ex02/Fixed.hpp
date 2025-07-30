/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 20:37:08 by yulpark           #+#    #+#             */
/*   Updated: 2025/07/30 20:18:17 by yulpark          ###   ########.fr       */
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
		Fixed &operator=(const Fixed& obj);
		Fixed &operator>(const Fixed& obj);
		Fixed &operator<(const Fixed& obj);
		Fixed &operator>=(const Fixed& obj);
		Fixed &operator==(const Fixed& obj);
		Fixed &operator!=(const Fixed& obj);
		~Fixed();
		float toFloat( void ) const;
		int toInt( void ) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif
