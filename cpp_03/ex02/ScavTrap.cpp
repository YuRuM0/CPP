/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 20:26:52 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/13 13:50:25 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	std::cout << "ScavTrap: Default Constructor called\n";
	this->setEnergy(50);
	this->setHit(100);
	this->setDamage(20);
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap: Constructor called\n";
	this->setName(name);
	this->setEnergy(50);
	this->setHit(100);
	this->setDamage(20);
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

void ScavTrap::run_ScavTrap(ScavTrap &player)
{
	std::string action;

	while (1)
	{
		printStatus(player);
		std::cout << "\n";
		std::cout << "ATTACK, REPAIR, CHANGE (player), GUARD or EXIT?\n";
		std::getline(std::cin, action);
		std::cout << "\n";
		if (action == "ATTACK")
		{
			if (player.Hit_pts >= 20 && Energy_pts > 0)
			{
				this->attack(player.name);
				player.takeDamage(this->Attack_dmg);
			}
			if (player.Hit_pts < 1)
				std::cout << "Player " << player.name << " has less than 1 Hit point, you must repair to continue!\n";
			if (Energy_pts < 1)
				std::cout << "Player " << name << " has less than 1 Energy point, you cannot attack!\n";
		}
		else if (action == "REPAIR")
		{
			if (Energy_pts < 1)
				std::cout << "Energy point low, cannot repair!\n";
			else
				this->beRepaired(1);
		}
		else if (action == "CHANGE" || action == "EXIT")
			break;
		else if (action == "GUARD")
			this->guardGate();
		else
			std::cout << "Write ATTACK or REPAIR.\n";
	}
}
