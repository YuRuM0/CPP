/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 15:58:22 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/13 18:34:45 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	type = "cat";
	ideas = new Brain();
	std::cout << "Cat: Default Constructor called\n";
}

Cat::Cat(const Cat &obj) : Animal(obj)
{
	std::cout << "Cat: Copy Constructor called\n";
	type = "Cat";
	for (int i = 0; i < 100; i++)
		ideas[i] = obj.ideas[i];
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
