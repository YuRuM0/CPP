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

ClapTrap::ClapTrap(): name(""), Hit_pts(10), Energy_pts(10), Attack_dmg(0)
{
	std::cout << "Constructor called!\n";
}

ClapTrap::ClapTrap(const std::string name): name(name), Hit_pts(10), Energy_pts(10), Attack_dmg(2)
{
	std::cout << "Copy Constructor called!\n";
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called!\n";
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
	//causes target to lose attack damage hit points
	//cost one energy point
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
