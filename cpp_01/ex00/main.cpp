/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 23:04:11 by yulpark           #+#    #+#             */
/*   Updated: 2025/07/26 18:32:12 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	randomChump("zombino");
	Zombie *Zombie2 = newZombie("zombina");
	Zombie2->announce();
	delete Zombie2;
	return (0);
}
