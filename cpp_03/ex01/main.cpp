/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 19:57:39 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/12 21:40:20 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap Player1("One");
	ScavTrap Player2("Two");
	std::string current;

	while (1)
	{
		std::cout << "Player 1, 2 or EXIT?\n";
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
