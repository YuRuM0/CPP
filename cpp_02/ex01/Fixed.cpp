/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 20:33:04 by yulpark           #+#    #+#             */
/*   Updated: 2025/07/29 21:23:19 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): num_val(0)
{
	std::cout << "Default constructor called\n";
}
Fixed &Fixed::operator<<(Fixed const& obj)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &obj)
		this->frac_bits = obj.toFloat();
	return (*this);
}

Fixed &Fixed::operator=(Fixed const& obj)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &obj)
		this->num_val = obj.num_val;
	return (*this);
}

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called\n";
	this->num_val = num;
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called\n";
	this->frac_bits = num;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n";
}

float Fixed::toFloat(void) const
{
	return 0.0f;
}

int Fixed::toInt(void) const
{
	return 0;
}
