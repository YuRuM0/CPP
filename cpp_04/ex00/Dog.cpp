/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 15:58:06 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/13 16:24:11 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
	this->type = "Dog";
	std::cout << "Dog: Default Constructor called\n";
}

Dog::Dog(const Dog &obj) : Animal(obj)
{
	std::cout << "Dog: Constructor called\n";
	type = "Dog";
}

Dog &Dog::operator=(const Dog &obj)
{
	if (this != &obj)
		this->type = obj.type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog: Destructor called\n";
}

//std::string Dog::getType() const
//{
//	return this->type;
//}

void Dog::makeSound() const
{
	std::cout << "Woof\n";
}
