/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 19:57:39 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/12 21:40:51 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap Player1("One");
	ClapTrap Player2("Two");
	std::string current;

	while (1)
	{
		std::cout << "Player 1, 2 or EXIT\n";
		std::getline(std::cin, current);
		if (current == "1")
			Player1.run_ClapTrap(Player2);
		else if (current == "2")
			Player2.run_ClapTrap(Player1);
		else if (current == "EXIT")
			return (0);
		else
			std::cout << "\nWrite 1, 2 or EXIT\n";
	}
	return (0);
}
