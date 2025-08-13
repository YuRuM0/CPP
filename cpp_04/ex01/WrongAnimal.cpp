#include "WrongAnimal.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 19:47:22 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/09 19:47:23 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

WrongAnimal::WrongAnimal() : type("")
{
	std::cout << "WrongAnimal: Default Constructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj) : type(obj.type)
{
	std::cout << "Wrong Animal: Constructor called\n";
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj)
{
	if (this != &obj)
		this->type = obj.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal: Destructor called\n";
}

std::string WrongAnimal::getType() const
{
	return this->type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "Wrong Animal sound....\n";
}
