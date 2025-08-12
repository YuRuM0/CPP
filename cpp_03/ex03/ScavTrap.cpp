/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 20:26:52 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/12 21:53:40 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	std::cout << "ScavTrap: Default Constructor called\n";
	this->setEnergy(SCAV_ENG);
	this->setHit(SCAV_HIT);
	this->setDamage(SCAV_ATTK);
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap: Constructor called\n";
	this->setName(name);
	this->setEnergy(SCAV_ENG);
	this->setHit(SCAV_HIT);
	this->setDamage(SCAV_ATTK);
}

ScavTrap::ScavTrap(ScavTrap &player) : ClapTrap(player)
{
	std::cout << "ScavTrap: Copy Constructor called\n";
	*this = player;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj)
{
	if (this != &obj)
	{
		ClapTrap::operator=(obj);
	}
	return (*this);
}

/*
Destructors for nonstatic member objects are called in the
reverse order in which they appear in the class declaration.
*/
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap: Destructor called\n";
}

void ScavTrap::guardGate()
{
	//activate gate keeper mode
	std::cout << "Gate keeper mode activated";
}

void ScavTrap::attack(const std::string &target)
{
	std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << Attack_dmg << " points of damage!\n";
	Energy_pts -= 1;
}
