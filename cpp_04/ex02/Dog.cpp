/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 15:58:06 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/11 19:36:37 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(): AAnimal()
{
	this->type = "Dog";
	ideas = new Brain();
	std::cout << "Dog: Default Constructor called\n";
}

Dog::Dog(const Dog &obj) : AAnimal()
{
	std::cout << "Dog: Constructor called\n";
	ideas = new Brain();
	*this = obj;
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
