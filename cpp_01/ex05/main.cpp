/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 19:49:02 by yulpark           #+#    #+#             */
/*   Updated: 2025/07/29 16:02:01 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "The possible inputs are DEBUG, INFO, WARNING and ERROR.\n";
		return (1);
	}
	Harl Harl;
	Harl.complain(av[1]);
	return (0);
}
