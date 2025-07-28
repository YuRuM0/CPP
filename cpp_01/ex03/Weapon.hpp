/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 21:11:16 by yulpark           #+#    #+#             */
/*   Updated: 2025/07/28 16:14:11 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <string>
#include <iostream>

class Weapon
{
	private:
		std::string type;
	public:
		Weapon(std::string type);
		~Weapon(void);
		const std::string &getType(void);
		void setType(std::string new_value);
};

#endif
