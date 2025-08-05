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

ClapTrap::ClapTrap(std::string name): name(name), Hit_pts(10), Energy_pts(10), Attack_dmg(0)
{
	std::cout << "Constructor called!\n";
}

ClapTrap::ClapTrap(const ClapTrap &player)
{
	std::cout << "Copy constructor called!\n";
	*this = player;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called!\n";
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
