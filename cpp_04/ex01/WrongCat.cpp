/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 16:02:24 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/10 15:03:10 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "WrongCat: Default constructor called\n";
	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &obj)
{
	std::cout << "Wrong Cat: Constructor called\n";
	*this = obj;
}

WrongCat &WrongCat::operator=(const WrongCat &obj)
{
	if (this != &obj)
		this->type = obj.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat: Destructor called\n";
}

void WrongCat::makeSound() const
{
	std::cout << "Zzzzzzzzzz......\n";
}
