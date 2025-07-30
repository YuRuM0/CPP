/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 20:33:04 by yulpark           #+#    #+#             */
/*   Updated: 2025/07/30 16:52:33 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): num_val(0)
{
	std::cout << "Default constructor called\n";
}

//int Fixed::getRawBits(void) const
//{
//	//std::cout << "getRawBits member function called\n";
//	return (this->num_val);
//}

Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy constructor called\n";
	this->num_val = obj.num_val;
}

Fixed &Fixed::operator=(const Fixed& obj)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &obj)
        this->num_val = obj.num_val;
	return (*this);
}

std::ostream &operator<<(std::ostream& os, const Fixed& obj)
{
	os << obj.toFloat();
	return (os);
}

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called\n";
	this->num_val = num << frac_bits;
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called\n";
	this->num_val = roundf(num * (1 << frac_bits));
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n";
}

float Fixed::toFloat(void) const
{
	return ((float)num_val / (1 << frac_bits));
}

int Fixed::toInt(void) const
{
	return ((int) num_val >> frac_bits);
}
