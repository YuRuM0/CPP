/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 19:57:57 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/08 21:53:58 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>
#include <string>
#include <iomanip>

class ClapTrap
{
	protected:
		std::string name;
		int Hit_pts;
		int Energy_pts;
		int Attack_dmg;

	public:
		ClapTrap();
		ClapTrap(const std::string name);
		virtual ~ClapTrap();
		ClapTrap(const ClapTrap &player);
		ClapTrap& operator=(const ClapTrap& obj);
		
		virtual void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::string getName();
		int getHit();
		int getEnergy();
		void run_ClapTrap(ClapTrap &player);
		void printStatus(ClapTrap &player);
		void setName(std::string name);
		void setHit(int points);
		void setEnergy(int points);
		void setDamage(int damage);
};

#endif
