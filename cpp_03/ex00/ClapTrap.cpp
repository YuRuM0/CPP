#include "ClapTrap.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 19:57:54 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/03 19:57:55 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): Hit_pts(10), Energy_pts(10), Attack_dmg(0)
{
	std::cout << "Constructor called!\n";
}

ClapTrap::ClapTrap(const ClapTrap &ClapTrap) : name(ClapTrap.name), Hit_pts(ClapTrap.Hit_pts),
					Energy_pts(ClapTrap.Energy_pts), Attack_dmg(ClapTrap.Attack_dmg)
{
	std::cout << "Copy Constructor called!\n";
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called!\n";
}

void ClapTrap::attack(const std::string &target)
{
	//causes target to lose attack damage hit points
	if (name == target)
		takeDamage(Attack_dmg);
	//cost one energy point
	Energy_pts -= 1;
	std::cout << "ClapTrap " << name << " attacks " << target << " , causing " << Attack_dmg << " points of damage!/n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!/n";
	Attack_dmg += amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	//regains amount hit points
	Hit_pts += amount;
	//requires one energy point
	Energy_pts -= 1;
	std::cout << "ClapTrap " << name << " regains " << amount << " amount of hitpoints!/n";
}

int ClapTrap::getHit()
{
	return Hit_pts;
}

int ClapTrap::getEnergy()
{
	return Energy_pts;
}

int ClapTrap::getDamage()
{
	return Attack_dmg;
}

const std::string &ClapTrap::getName() const
{
	return name;
}
