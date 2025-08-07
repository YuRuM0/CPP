/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 19:57:39 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/07 23:15:05 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void FragTrap::run_FragTrap(FragTrap &player)
{
	std::string action;

	while (1)
	{
		printStatus(player);
		std::cout << "\n";
		std::cout << "ATTACK, REPAIR, CHANGE (player), HIGH5 or EXIT?\n";
		std::getline(std::cin, action);
		std::cout << "\n";
		if (action == "ATTACK")
		{
			if (player.Hit_pts - player.Attack_dmg > 0 && Energy_pts > 0)
			{
				this->attack(player.name);
				player.takeDamage(this->Attack_dmg);
			}
			if (player.Hit_pts < 30)
				std::cout << "Player " << player.name << " has less than 30 Hit point, you must repair to continue!\n";
			if (Energy_pts < 30)
				std::cout << "Player " << name << " has less than 30 Energy point, you cannot attack!\n";
		}
		else if (action == "REPAIR")
		{
			if (Energy_pts < 1)
				std::cout << "Energy point low, cannot repair!\n";
			else
				this->beRepaired(1);
		}
		else if (action == "CHANGE" || action == "EXIT")
			break;
		else if (action == "HIGH5")
			this->highFivesGuys();
		else
			std::cout << "Write ATTACK, REPAIR, CHANGE (player), HIGH5 or EXIT.\n";
	}
}

int main(void)
{
	FragTrap Player1("One");
	FragTrap Player2("Two");
	std::string current;

	while (1)
	{
		std::cout << "Player 1, 2 or EXIT?\n";
		std::getline(std::cin, current);
		if (current == "1")
			Player1.run_FragTrap(Player2);
		else if (current == "2")
			Player2.run_FragTrap(Player1);
		else if (current == "EXIT")
			return (0);
		else
			std::cout << "\nWrite 1, 2 or EXIT\n";
	}
	return (0);
}
