/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 23:03:51 by yulpark           #+#    #+#             */
/*   Updated: 2025/07/26 18:33:00 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::~Zombie(void)
{
	std::cout << "Say goodbye to " << name << ":(\n\n";
}

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}
