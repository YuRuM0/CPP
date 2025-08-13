/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 19:57:39 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/13 13:39:05 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap Player1("One");
	DiamondTrap Player2("Two");
	//ScavTrap Player3("Scav");
	std::string current;

	//std::cout << "\n\nPlayer 3 Energy: " << Player3.getEnergy() << "\n\n";
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
