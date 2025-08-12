/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 23:16:47 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/12 21:59:21 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap: Default Constructor called\n";
	this->name = ClapTrap::name;
	this->Hit_pts = FragTrap::FRAG_HIT;
	this->Energy_pts = ScavTrap::SCAV_ENG;
	this->Attack_dmg = FragTrap::FRAG_ATTK;
}

DiamondTrap::DiamondTrap(std::string param)
: ClapTrap(param + "_clap_name"), ScavTrap(), FragTrap(), name(param)
{
	std::cout << "DiamondTrap: Constructor called\n";
	this->Hit_pts = FragTrap::FRAG_HIT;
	this->Energy_pts = ScavTrap::SCAV_ENG;
	this->Attack_dmg = FragTrap::FRAG_ATTK;
}


DiamondTrap::DiamondTrap(DiamondTrap &player)
: ClapTrap(player), ScavTrap(player), FragTrap(player)
{
	std::cout << "DiamondTrap: Copy Constructor called\n";
	*this = player;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &obj)
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

/*
Destructors for nonstatic member objects are called in the
reverse order in which they appear in the class declaration.
*/
DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap: Destructor called\n";
}

void DiamondTrap::attack(const std::string &target)
{
	std::cout << "DiamondTrap " << name << " attacks " << target << ", causing " << Attack_dmg << " points of damage!\n";
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "My name is: " << this->name << std::endl;
	std::cout << "ClapTrap name is: " << this->ClapTrap::getName() << std::endl;
}

void DiamondTrap::printStatus(DiamondTrap &player)
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

void DiamondTrap::run_DiamondTrap(DiamondTrap &player)
{
	std::string action;

	while (1)
	{
		printStatus(player);
		std::cout << "\n";
		std::cout << "ATTACK, REPAIR, CHANGE (player), NAME or EXIT?\n";
		std::getline(std::cin, action);
		std::cout << "\n";
		if (action == "ATTACK")
		{
			if (player.Hit_pts - player.Attack_dmg > 0 && Energy_pts > 0)
			{
				this->attack(player.name);
				player.takeDamage(this->Attack_dmg);
			}
			if (player.Hit_pts < 30)
				std::cout << "Player " << player.name << " has low Hit points, you must repair to continue!\n";
			if (Energy_pts < 30)
				std::cout << "Player " << name << " has low Energy points, you cannot attack!\n";
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
		else if (action == "NAME")
			this->whoAmI();
		else
			std::cout << "Write ATTACK, REPAIR, CHANGE (player), NAME or EXIT.\n";
	}
}
