/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 19:57:57 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/13 13:42:07 by yulpark          ###   ########.fr       */
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
		unsigned int Hit_pts;
		unsigned int Energy_pts;
		unsigned int Attack_dmg;

	public:
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap(const ClapTrap &player);
		ClapTrap& operator=(const ClapTrap& obj);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		int getHit();
		int getEnergy();

		void run_ClapTrap(ClapTrap &player);
		void printStatus(ClapTrap &player);
};

#endif
