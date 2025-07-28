/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 21:11:08 by yulpark           #+#    #+#             */
/*   Updated: 2025/07/28 16:19:38 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_H
#define HUMAN_A_H

#include "Weapon.hpp"

class HumanA
{
	private:
		std::string name;
		Weapon &weapon;

	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);
		void attack(void);
};

#endif
