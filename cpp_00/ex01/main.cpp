/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 19:47:56 by yulpark           #+#    #+#             */
/*   Updated: 2025/07/19 20:02:21 by yulpark          ###   ########.fr       */
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
		std::getline(std::cin, cmd);
	}
	return (0);
}
