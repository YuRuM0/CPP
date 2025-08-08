/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 23:16:47 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/08 21:49:10 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap constructor called\n";
}

DiamondTrap::DiamondTrap(std::string param)
: ClapTrap(param + "_clap_name"), FragTrap(param), ScavTrap(param), name(param)
{
	std::cout << "DiamondTrap constructor called\n";
	this->Hit_pts = FragTrap::Hit_pts;
	this->Energy_pts = ScavTrap::Energy_pts;
	this->Attack_dmg = FragTrap::Attack_dmg;
}


DiamondTrap::DiamondTrap(DiamondTrap &player)
: ClapTrap(player), ScavTrap(player), FragTrap(player)
{
	*this = player;
}

/*
Destructors for nonstatic member objects are called in the
reverse order in which they appear in the class declaration.
*/
DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called\n";
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
