/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 19:47:56 by yulpark           #+#    #+#             */
/*   Updated: 2025/07/20 19:38:13 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(void)
{
	PhoneBook phonebook;
	std::string cmd;

	std::getline(std::cin, cmd);
	while (cmd != "EXIT")
	{
		if (cmd == "ADD")
			phonebook.ADD();
		else if (cmd == "SEARCH")
			phonebook.SEARCH();
		else if (cmd != "EXIT")
			std::cout << "The available commands are ADD, SEARCH and EXIT" << std::endl;
		std::getline(std::cin, cmd);
	}
	return (0);
}
