/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 18:51:05 by yulpark           #+#    #+#             */
/*   Updated: 2025/07/29 20:18:43 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <string>

/*
static means that the variable belongs to a class, not to any object
accessable without object creation
every instance of the class shares the same copy
*/

class Fixed
{
	private:
		int num_val;
		static const int frac_bits = 8;

	public:
		Fixed(void);
		Fixed(const Fixed &obj);
		Fixed &operator=(Fixed const& obj);
		~Fixed(void);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};


#endif
