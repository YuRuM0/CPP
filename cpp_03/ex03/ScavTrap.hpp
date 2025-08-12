/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 20:26:46 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/12 21:56:43 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap &player);
		ScavTrap& operator=(const ScavTrap& obj);
		virtual ~ScavTrap();
		void guardGate();
		void attack(const std::string& target) override;
		void run_ScavTrap(ScavTrap &player);

		const static int SCAV_HIT = 100;
		const static int SCAV_ENG = 50;
		const static int SCAV_ATTK = 20;
};
