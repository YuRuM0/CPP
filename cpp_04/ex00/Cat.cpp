/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 15:58:22 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/09 21:40:03 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): type("Cat")
{
	std::cout << "Cat: Default Constructor called\n";
}

Cat::Cat(const Cat &obj): type("Cat")
{
	std::cout << "Cat: Copy Constructor called\n";
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
	std::cout << "Cat: Destructor called\n";
}

//std::string Cat::getType() const
//{
//	return this->type;
//}

void Cat::makeSound() const
{
	std::cout << "Niau\n";
}
