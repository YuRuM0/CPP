/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 18:33:46 by yulpark           #+#    #+#             */
/*   Updated: 2025/07/30 15:09:18 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Zombie
{
	private:
		std::string name;

	public:
		Zombie() {}
		Zombie(std::string name);
		~Zombie(void);

		void	announce(std::string name);
};

Zombie*	zombieHorde( int N, std::string name );

#endif
