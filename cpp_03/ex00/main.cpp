/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 19:57:39 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/03 21:13:54 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap Player1;
	ClapTrap Player2;

	while (!(Player1.getHit() == 0 || Player2.getHit() == 0 || Player1.getEnergy() == 0 || Player2.getEnergy() == 0))
	{

	}
	return (0);
}
