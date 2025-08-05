/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 19:57:39 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/04 20:23:14 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void ClapTrap::printStatus(ClapTrap &player)
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

void ClapTrap::run_ClapTrap(ClapTrap &player)
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
		else
			std::cout << "Write ATTACK or REPAIR.\n";
	}
}

int main(void)
{
	ClapTrap Player1("One");
	ClapTrap Player2("Two");
	std::string current;

	std::cout << "Player 1 or 2?\n";
	while (1)
	{
		std::getline(std::cin, current);
		if (current == "1")
			Player1.run_ClapTrap(Player2);
		else if (current == "2")
			Player2.run_ClapTrap(Player1);
		else
			std::cout << "\nWrite 1 or 2\n";
	}
	return (0);
}
