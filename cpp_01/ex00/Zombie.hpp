/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 23:03:45 by yulpark           #+#    #+#             */
/*   Updated: 2025/07/25 23:21:26 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <iomanip>

class Zombie{
	private:
		std::string name;

	public:
		Zombie(std::string name);
		~Zombie(void);
		void	announce(void);

};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
