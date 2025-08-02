/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 20:37:06 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/02 21:45:12 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : num_val(0)
{
}

Fixed::Fixed(const Fixed &obj): num_val(obj.num_val)
{
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

bool Fixed::operator>(const Fixed& obj) const
{
	if (toFloat() >  obj.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator<(const Fixed& obj) const
{
	if (toFloat() < obj.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator>=(const Fixed& obj) const
{
	if (toFloat() >= obj.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator==(const Fixed& obj) const
{
	if (toFloat() == obj.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator!=(const Fixed& obj) const
{
	if (toFloat() != obj.toFloat())
		return (true);
	return (false);
}

float Fixed::operator+(const Fixed& obj)
{
	return (num_val + obj.toFloat());
}

float Fixed::operator-(const Fixed& obj)
{
	return (num_val - obj.toFloat());
}

float Fixed::operator*(const Fixed& obj)
{
	return (num_val * obj.toFloat());
}

float Fixed::operator/(const Fixed& obj)
{
	return (num_val / obj.toFloat());
}

Fixed &Fixed::operator++()
{
	num_val += 1;
	return (*this);
}

Fixed &Fixed::operator--()
{
	num_val -= 1;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp;
	temp = *this;
	num_val += 1;
	return (temp);
}

Fixed Fixed::operator--(int)
{
	Fixed temp;
	temp = *this;
	num_val -= 1;
	return (temp);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

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

