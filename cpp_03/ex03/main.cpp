/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 19:57:39 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/08 16:44:27 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

void DiamondTrap::run_DiamondTrap(DiamondTrap &player)
{
	std::string action;

	while (1)
	{
		printStatus(player);
		std::cout << "\n";
		std::cout << "ATTACK, REPAIR, CHANGE (player), NAME or EXIT?\n";
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
				std::cout << "Player " << player.name << " has low Hit points, you must repair to continue!\n";
			if (Energy_pts < 30)
				std::cout << "Player " << name << " has low Energy points, you cannot attack!\n";
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
		else if (action == "NAME")
			this->whoAmI();
		else
			std::cout << "Write ATTACK, REPAIR, CHANGE (player), NAME or EXIT.\n";
	}
}

int main(void)
{
	DiamondTrap Player1("One");
	DiamondTrap Player2("Two");
	std::string current;

	while (1)
	{
		std::cout << "Player 1, 2 or EXIT?\n";
		std::getline(std::cin, current);
		if (current == "1")
			Player1.run_DiamondTrap(Player2);
		else if (current == "2")
			Player2.run_DiamondTrap(Player1);
		else if (current == "EXIT")
			return (0);
		else
			std::cout << "\nWrite 1, 2 or EXIT\n";
	}
	return (0);
}
