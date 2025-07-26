/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 18:33:43 by yulpark           #+#    #+#             */
/*   Updated: 2025/07/26 20:55:22 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int is_number(std::string N)
{
	for (int i = 0; N[i]; i++)
	{
		if (std::isdigit(N[i]) == 0)
			return (0);
	}
	return (1);
}

int main(void)
{
	std::string N;
	std::string name;
	std::cout << "Time to create a horde of Zombies!\n";
	while (true)
	{
		std::cout << "Give the zombies a name:\n";
		std::getline(std::cin, name);
		if (!name.empty())
			break;
	}
	while (true)
	{
		std::cout << "How many zombies would you like: \n";
		std::getline(std::cin, N);
		if (is_number(N))
			break;
	}
	Zombie *Zombies = zombieHorde(stoi(N), name);
	delete[] Zombies;
	return (0);
}
