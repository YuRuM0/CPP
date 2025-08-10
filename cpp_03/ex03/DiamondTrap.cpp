/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 23:16:47 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/10 17:33:16 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap: Default Constructor called\n";
	this->name = ClapTrap::name;
	this->Hit_pts = FragTrap::Hit_pts;
	this->Energy_pts = ScavTrap::Energy_pts;
	this->Attack_dmg = FragTrap::Attack_dmg;
}

DiamondTrap::DiamondTrap(std::string param)
: ClapTrap(param + "_clap_name"), ScavTrap(), FragTrap(), name(param)
{
	std::cout << "DiamondTrap: Constructor called\n";
	//std::cout << "Diamond Constructor: " << FragTrap::Hit_pts << std::endl;
	//std::cout << "Diamond Test: " << ScavTrap::Energy_pts << std::endl;
	this->Attack_dmg = 30;
	//std::cout << "Diamond Constructor: " << Hit_pts << std::endl;
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
