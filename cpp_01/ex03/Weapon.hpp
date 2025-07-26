/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 21:11:16 by yulpark           #+#    #+#             */
/*   Updated: 2025/07/26 21:25:16 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON
#define WEAPON

#include <string>
#include <iostream>

class Weapon
{
	private:
		std::string type;
	public:
		Weapon(std::string type);
		~Weapon(void);
		const std::string &getType();
		void setType(std::string new_value);
};

#endif
