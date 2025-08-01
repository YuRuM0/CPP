/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 20:37:06 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/01 14:15:49 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : num_val(0)
{
}

Fixed::Fixed(const Fixed &obj)
{
	this->num_val = obj.getRawBits();
}

Fixed::Fixed(const int num)
{
	this->num_val = num << frac_bits;
}

Fixed::Fixed(const float num)
{
	this->num_val = roundf(num * (1 << frac_bits));
}

Fixed::~Fixed(void)
{
}

int Fixed::getRawBits(void) const
{
	return (this->num_val);
}

void Fixed::setRawBits(int const raw)
{
	this->num_val = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)num_val / (1 << frac_bits));
}

int Fixed::toInt(void) const
{
	return ((int) num_val >> frac_bits);
}

bool Fixed::operator>(const Fixed& obj)
{
	if (toFloat() >  obj.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator<(const Fixed& obj)
{
	if (toFloat() < obj.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator>=(const Fixed& obj)
{
	if (toFloat() >= obj.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator==(const Fixed& obj)
{
	if (toFloat() == obj.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator!=(const Fixed& obj)
{
	if (toFloat() != obj.toFloat())
		return (true);
	return (false);
}

Fixed &Fixed::operator+(const Fixed& obj)
{
	this->num_val += obj.toFloat();
	return (*this);
}

//Fixed &Fixed::operator-(const Fixed& obj)
//{
//}


Fixed &Fixed::operator*(const Fixed& obj)
{
	num_val *= obj.toFloat();
	return (*this);
}


//Fixed &Fixed::operator/(const Fixed& obj)
//{

//}


Fixed &Fixed::operator=(Fixed const& obj)
{
	if (this != &obj)
        this->num_val = obj.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream& os, const Fixed& obj)
{
	os << obj.toFloat();
	return (os);
}
