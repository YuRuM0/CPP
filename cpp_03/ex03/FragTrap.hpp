/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 20:26:46 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/08 21:59:30 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

/*
adding virtual before public indicates that all the derived classes must share the same ClapTrap instance
*/

class FragTrap: virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap &player);
		FragTrap& operator=(const FragTrap& obj);
		virtual ~FragTrap();
		void highFivesGuys();
		void attack(const std::string& target) override;
		void run_FragTrap(FragTrap &player);
};
