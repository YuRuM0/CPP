/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 20:33:01 by yulpark           #+#    #+#             */
/*   Updated: 2025/07/29 21:04:21 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <string>

class Fixed
{
	private:
		int num_val;
		static const int frac_bits = 8;

	public:
		Fixed(void);
		Fixed(const int);
		Fixed(const float);
		Fixed &Fixed::operator<<(Fixed const& obj);
		~Fixed();
		float toFloat( void ) const;
		int toInt( void ) const;
};


#endif
