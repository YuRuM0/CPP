/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 15:58:06 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/13 18:33:55 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(): Animal()
{
	std::cout << "Dog: Default Constructor called\n";
	this->type = "Dog";
	ideas = new Brain();
}

Dog::Dog(const Dog &obj) : Animal()
{
	std::cout << "Dog: Constructor called\n";
	type = "Dog";
	for (int i = 0; i < 100; i++)
		ideas[i] = obj.ideas[i];
}

Dog &Dog::operator=(const Dog &obj)
{
	if (this != &obj)
		this->type = obj.type;
	return (*this);
}

Dog::~Dog()
{
	delete ideas;
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

Brain &Dog::getBrain()
{
	return (*ideas);
}
