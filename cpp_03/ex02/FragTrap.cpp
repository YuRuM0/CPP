/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 20:26:52 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/07 23:11:12 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	std::cout << "FragTrap constructor called\n";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap constructor called\n";
	this->setName(name);
	this->setEnergy(100);
	this->setHit(100);
	this->setDamage(30);
}

FragTrap::FragTrap(FragTrap &player) : ClapTrap(player.getName())
{
	*this = player;
}

/*
Destructors for nonstatic member objects are called in the
reverse order in which they appear in the class declaration.
*/
FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called\n";
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
