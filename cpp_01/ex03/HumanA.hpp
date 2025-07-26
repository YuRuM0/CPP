/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 21:11:08 by yulpark           #+#    #+#             */
/*   Updated: 2025/07/26 21:29:00 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A
#define HUMAN_A

#include "Weapon.hpp"

class HumanA
{
	private:
		Weapon weapon;
		std::string name;

	public:
		HumanA(Weapon weapon);
		~HumanA(void);
		void attack(Weapon weapon, std::string name);
};

#endif
