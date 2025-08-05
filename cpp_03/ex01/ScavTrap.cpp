/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 20:26:52 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/05 20:52:26 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) :  ClapTrap(name)
{
	std::cout << "ScavTrap constructor called\n";
	this->setName(name);
	this->setEnergy(50);
	this->setHit(100);
	this->setDamage(20);
}

ScavTrap::ScavTrap(ScavTrap &player) : ClapTrap(player.getName())
{
	*this = player;
}

/*
Destructors for nonstatic member objects are called in the
reverse order in which they appear in the class declaration.
*/
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called\n";
}

void ScavTrap::guardGate()
{
	//activate gate keeper mode
	std::cout << "Gate keeper mode activated";
}
