/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 21:11:10 by yulpark           #+#    #+#             */
/*   Updated: 2025/07/26 21:29:45 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B
#define HUMAN_B

#include "Weapon.hpp"

class HumanB
{
	private:
		Weapon weapon;
		std::string name;

	public:
		HumanB(void);
		~HumanB(void);
		void attack(Weapon weapon, std::string name);
};

#endif
