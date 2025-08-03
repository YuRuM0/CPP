/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 19:57:57 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/03 21:12:33 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>
#include <string>

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
		ClapTrap(const ClapTrap &ClapTrap);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		int ClapTrap::getHit();
		int ClapTrap::getEnergy();
		int ClapTrap::getDamage();
		const std::string &ClapTrap::getName() const;
};

#endif
