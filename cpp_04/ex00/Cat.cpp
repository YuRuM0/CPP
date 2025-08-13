/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 15:58:22 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/13 18:24:25 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat: Default Constructor called\n";
	type = "Cat";
}

Cat::Cat(const Cat &obj) : Animal(obj)
{
	std::cout << "Cat: Copy Constructor called";
	type = "Cat";
}

Cat &Cat::operator=(const Cat &obj)
{
	if (this != &obj)
		this->type = obj.type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat: Destructor called\n";
}

void Cat::makeSound() const
{
	std::cout << "Meow\n";
}
