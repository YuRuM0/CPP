/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 20:36:53 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/02 21:06:02 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed a(1);
	Fixed const b( Fixed( 5.1f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << a / b << std::endl;
	std::cout << (a > b) << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::min( a ,b ) << std::endl;
	return 0;
}
