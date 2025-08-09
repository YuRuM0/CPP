/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 23:16:35 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/09 15:22:12 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
	private:
		std::string name;
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap &player);
		DiamondTrap &operator=(const DiamondTrap &obj);
		~DiamondTrap();
		void attack(const std::string& target);
		void whoAmI();
		void run_DiamondTrap(DiamondTrap &player);
};
