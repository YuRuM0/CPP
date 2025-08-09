/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 16:01:57 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/09 18:27:06 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("")
{
	std::cout << "Animal: Constructor called\n";
}

Animal::Animal(const Animal &obj) :  type("")
{
	std::cout << "Animal: Copy constructor called\n";
	*this = obj;
}

Animal &Animal::operator=(const Animal &obj)
{
	// TODO: insert return statement here
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
