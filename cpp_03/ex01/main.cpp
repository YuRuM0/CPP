/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 19:57:39 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/07 22:03:54 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

void ScavTrap::run_ScavTrap(ScavTrap &player)
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
		else if (action == "GUARD")
			this->guardGate();
		else
			std::cout << "Write ATTACK or REPAIR.\n";
	}
}

int main(void)
{
	ScavTrap Player1("One");
	ScavTrap Player2("Two");
	std::string current;

	std::cout << "Player 1, 2 or EXIT?\n";
	while (1)
	{
		std::getline(std::cin, current);
		if (current == "1")
			Player1.run_ScavTrap(Player2);
		else if (current == "2")
			Player2.run_ScavTrap(Player1);
		else if (current == "EXIT")
			return (0);
		else
			std::cout << "\nWrite 1, 2 or EXIT\n";
	}
	return (0);
}
