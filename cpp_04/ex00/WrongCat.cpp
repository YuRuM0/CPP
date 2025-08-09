/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 16:02:24 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/09 20:30:59 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat: Default constructor called\n";
}

WrongCat::WrongCat(const WrongCat &obj)
{
}

WrongCat &WrongCat::operator=(const WrongCat &obj)
{
	// TODO: insert return statement here
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat: Destructor called\n";
}

void WrongCat::makeSound()
{
}
