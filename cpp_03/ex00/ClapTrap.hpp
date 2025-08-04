/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 19:57:57 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/04 15:13:32 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>
#include <string>
#include <iomanip>

class ClapTrap
{
	private:
		std::string name;
		int Hit_pts;
		int Energy_pts;
		int Attack_dmg;

	public:
		ClapTrap();
		~ClapTrap();
		ClapTrap(const std::string name);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		int getHit();
		int getEnergy();
		void run_ClapTrap(ClapTrap &player);
		void printStatus(ClapTrap &player);
};

#endif
