/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 16:01:57 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/13 18:31:42 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("")
{
	std::cout << "Animal: Constructor called\n";
}

Animal::Animal(const Animal &obj) : type(obj.type)
{
	std::cout << "Animal: Copy constructor called\n";
}

Animal &Animal::operator=(const Animal &obj)
{
	if (this != &obj)
		this->type = obj.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal: Destructor called\n";
}

std::string Animal::getType() const
{
	return this->type;
}

void Animal::makeSound() const
{
	std::cout << "Animal Sound\n";
}
