/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 20:16:59 by yulpark           #+#    #+#             */
/*   Updated: 2025/07/29 18:43:16 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

static Levels convert_level(char *av)
{
	std::string avs(av);

	if (avs == "DEBUG")
		return (DEBUG);
	else if (avs == "INFO")
		return (INFO);
	else if (avs == "WARNING")
		return (WARNING);
	else if (avs == "ERROR")
		return (ERROR);
	return (NO_INPUT);
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "You must file at least one complaint!\n";
		return (0);
	}
	Harl harl;
	Levels level;

	level = convert_level(av[1]);
	harl.complain(level);
	return (0);
}
