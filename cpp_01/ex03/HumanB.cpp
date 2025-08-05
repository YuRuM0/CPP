/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 21:11:04 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/05 18:38:18 by yulpark          ###   ########.fr       */
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

/*
Using reference here makes sure that the weapon isn't null, so that it saves me lines so I don't have
to check if the input null
*/

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
