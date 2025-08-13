/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 16:01:57 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/13 18:47:03 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal() : type("")
{
	std::cout << "AAnimal: Constructor called\n";
}

AAnimal::AAnimal(const AAnimal &obj) : type(obj.type)
{
	std::cout << "AAnimal: Copy constructor called\n";
}

AAnimal &AAnimal::operator=(const AAnimal &obj)
{
	if (this != &obj)
		this->type = obj.type;
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal: Destructor called\n";
}

std::string AAnimal::getType() const
{
	return this->type;
}

void AAnimal::makeSound() const
{
	std::cout << "Animal Sound\n";
}
