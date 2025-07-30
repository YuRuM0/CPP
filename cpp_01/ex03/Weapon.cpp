/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 15:22:53 by yulpark           #+#    #+#             */
/*   Updated: 2025/07/30 15:26:55 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;
}

Weapon::~Weapon(void)
{
	std::cout << "Weapon destroyed\n";
}

/*
if we use & we don't have to make a copy but send over the original
*/

const std::string &Weapon::getType(void)
{
	return (this->type);
}
void Weapon::setType(std::string new_value)
{
	this->type = new_value;
}
