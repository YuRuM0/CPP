/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 19:57:54 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/10 17:24:54 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name(""), Hit_pts(10), Energy_pts(10), Attack_dmg(0)
{
	std::cout << "Default constructor called\n";
}

ClapTrap::ClapTrap(std::string name): name(name), Hit_pts(10), Energy_pts(10), Attack_dmg(0)
{
	std::cout << "Constructor called!\n";
}

ClapTrap::ClapTrap(const ClapTrap &player)
{
	std::cout << "A copy constructor called!\n";
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
	std::cout << "Destructor called!\n";
}

int ClapTrap::getHit()
{
	return this->Hit_pts;
}

int ClapTrap::getEnergy()
{
	return this->Energy_pts;
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
