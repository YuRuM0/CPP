/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 20:26:52 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/09 15:44:38 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	std::cout << "ScavTrap: Default Constructor called\n";
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap: Constructor called\n";
	this->setName(name);
	this->setEnergy(50);
	this->setHit(100);
	this->setDamage(20);
}

ScavTrap::ScavTrap(ScavTrap &player) : ClapTrap(player.getName())
{
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
