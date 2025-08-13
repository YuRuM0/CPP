/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 20:26:52 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/13 13:58:22 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	std::cout << "FragTrap: Default constructor called\n";
	this->setEnergy(100);
	this->setHit(100);
	this->setDamage(30);
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap: Constructor called\n";
	this->setName(name);
	this->setEnergy(100);
	this->setHit(100);
	this->setDamage(30);
}

FragTrap::FragTrap(FragTrap &player) : ClapTrap(player)
{
	std::cout << "FragTrap: Copy Constructor called\n";
	*this = player;
}

FragTrap& FragTrap::operator=(const FragTrap& obj)
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
FragTrap::~FragTrap()
{
	std::cout << "FragTrap: destructor called\n";
}

void FragTrap::highFivesGuys()
{
	//activate gate keeper mode
	std::cout << "Give me a five!\n";
}

void FragTrap::attack(const std::string &target)
{
	std::cout << "FragTrap " << name << " attacks " << target << ", causing " << Attack_dmg << " points of damage!\n";
	Energy_pts -= 1;
}

void FragTrap::run_FragTrap(FragTrap &player)
{
	std::string action;

	while (1)
	{
		printStatus(player);
		std::cout << "\n";
		std::cout << "ATTACK, REPAIR, CHANGE (player), HIGH5 or EXIT?\n";
		std::getline(std::cin, action);
		std::cout << "\n";
		if (action == "ATTACK")
		{
			if (player.Hit_pts >= 30 && Energy_pts > 0)
			{
				this->attack(player.name);
				player.takeDamage(this->Attack_dmg);
			}
			if (player.Hit_pts < 30)
				std::cout << "Player " << player.name << " has less than 30 Hit point, you must repair to continue!\n";
			if (Energy_pts < 30)
				std::cout << "Player " << name << " has less than 30 Energy point, you cannot attack!\n";
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
		else if (action == "HIGH5")
			this->highFivesGuys();
		else
			std::cout << "Write ATTACK, REPAIR, CHANGE (player), HIGH5 or EXIT.\n";
	}
}
