/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 19:57:54 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/09 15:45:13 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name(""), Hit_pts(0), Energy_pts(0), Attack_dmg(0)
{
	std::cout << "ClapTrap: Default Constructor called!\n";
}

ClapTrap::ClapTrap(std::string name): name(name), Hit_pts(10), Energy_pts(10), Attack_dmg(0)
{
	std::cout << "ClapTrap: Constructor called!\n";
}

ClapTrap::ClapTrap(const ClapTrap &player)
{
	std::cout << "ClapTrap: Copy constructor called!\n";
	*this = player;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& obj)
{
	if (this != &obj)
	{
		this->name = obj.name;
		this->Attack_dmg = obj.Attack_dmg;
		this->Energy_pts = obj.Energy_pts;
		this->Hit_pts = obj.Hit_pts;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap: Destructor called!\n";
}

std::string ClapTrap::getName()
{
	return this->name;
}

int ClapTrap::getHit()
{
	return this->Hit_pts;
}

int ClapTrap::getEnergy()
{
	return Energy_pts;
}

void ClapTrap::attack(const std::string &target)
{
	std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << Attack_dmg << " points of damage!\n";
	Energy_pts -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
		std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!\n";
		Hit_pts -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << name << " regains " << amount << " amount of hit points!\n";
	//regains amount hit points
	Hit_pts += amount;
	//requires one energy point
	Energy_pts -= 1;
}

void ClapTrap::setName(std::string name)
{
	this->name = name;
}

void ClapTrap::setHit(int points)
{
	this->Hit_pts = points;
}

void ClapTrap::setEnergy(int points)
{
	this->Energy_pts = points;
}

void ClapTrap::setDamage(int damage)
{
	this->Attack_dmg = damage;
}

void ClapTrap::printStatus(ClapTrap &player)
{
	std::cout << "\n=================================================================\n"
                  << "|             Current Status of Player1 and Player2             |\n"
                  << "=================================================================\n"
				  << "|" << std::setw(15) << std::left << " "
                  << "|" << std::setw(15) << std::left << "Hit points"
                  << "|" << std::setw(15) << std::left << "Energy points"
                  << "|" << std::setw(15) << std::left << "Attack damage  |\n"
                  << "-----------------------------------------------------------------\n"
                  << "|" << std::setw(15) << std::left << this->name
                  << "|" << std::setw(15) << std::left << this->Hit_pts
                  << "|" << std::setw(15) << std::left << this->Energy_pts
                  << "|" << std::setw(15) << std::left << this->Attack_dmg << "|\n"
                  << "|" << std::setw(15) << std::left << player.name
                  << "|" << std::setw(15) << std::left << player.Hit_pts
                  << "|" << std::setw(15) << std::left << player.Energy_pts
                  << "|" << std::setw(15) << std::left << player.Attack_dmg << "|\n";
        std::cout << "-----------------------------------------------------------------\n\n";
}

void ClapTrap::run_ClapTrap(ClapTrap &player)
{
	std::string action;
	while (1)
	{
		printStatus(player);
		std::cout << "\n";
		std::cout << "ATTACK, REPAIR or CHANGE (player)?\n";
		std::getline(std::cin, action);
		std::cout << "\n";
		if (action == "ATTACK")
		{
			if (player.Hit_pts > 0 && Energy_pts > 0)
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
		else if (action == "CHANGE")
			break;
		else
			std::cout << "Write ATTACK or REPAIR.\n";
	}
}
