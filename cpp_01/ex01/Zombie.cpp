/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 18:33:49 by yulpark           #+#    #+#             */
/*   Updated: 2025/07/26 20:55:46 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::~Zombie(void)
{
	std::cout << "Say goodbye to the zombies :(\n";
}

void Zombie::announce(std::string name)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}
