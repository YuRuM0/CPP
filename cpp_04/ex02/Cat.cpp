/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 15:58:22 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/13 13:56:56 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal()
{
	type = "cat";
	ideas = new Brain();
	std::cout << "Cat: Default Constructor called\n";
}

Cat::Cat(const Cat &obj) : AAnimal()
{
	std::cout << "Cat: Copy Constructor called\n";
	type = "Cat";
	ideas = obj.ideas;
	*this = obj;
}

Cat &Cat::operator=(const Cat &obj)
{
	if (this != &obj)
		this->type = obj.type;
	return (*this);
}

Cat::~Cat()
{
	delete ideas;
	std::cout << "Cat: Destructor called\n";
}

//std::string Cat::getType() const
//{
//	return this->type;
//}

void Cat::makeSound() const
{
	std::cout << "Meow\n";
}

Brain &Cat::getBrain()
{
	return (*ideas);
}
