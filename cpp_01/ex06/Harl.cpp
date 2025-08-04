/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 20:16:52 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/04 18:07:55 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "[ DEBUG ]\n"
	          << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
}

void Harl::info(void)
{
	std::cout << "[ INFO ]\n"
			  << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void Harl::warning(void)
{
	std::cout << "[ WARNING ]\n"
	 		  << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years, whereas you started working here just last month.\n";
}

void Harl::error(void)
{
	std::cout << "[ ERROR ]\n"
			  << "This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain( std::string s_level)
{
	size_t i {};

	while (level[i] != "INVALID" && level[i] != s_level)
		i++;
	switch (i) // compares level with each case values, if match found, jumps to that case
	{
		case DEBUG:
			debug();
			// fall through
		case INFO:
			info();
			// fall through
		case WARNING:
			warning();
			// fall through
		case ERROR:
			error();
			break;
		default:
			std::cout << "[Probably complaining about insignificant problems] \n";
			break;
	}
}
