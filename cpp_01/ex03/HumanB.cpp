/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 21:11:04 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/06 15:54:08 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
}

HumanB::~HumanB(void)
{
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void HumanB::attack(void)
{
	if (weapon == NULL)
		std::cout << this->name << "attacks with their bare hands\n";
	else
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}
