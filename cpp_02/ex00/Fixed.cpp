/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 18:51:01 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/01 13:52:00 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : num_val(0)
{
	std::cout << "Default constructor called\n";
}

/*
this obj is the old one, the one is already there, and this refers to the
newly created object
*/
Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy constructor called\n";
	this->num_val = obj.getRawBits();
}

/*
this runs when you want to "copy" but the variable already exits
*/
Fixed &Fixed::operator=(Fixed const& obj)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &obj)
		this->num_val = obj.getRawBits();
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n";
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (this->num_val);
}

void Fixed::setRawBits(int const raw)
{
	this->num_val = raw;
}
