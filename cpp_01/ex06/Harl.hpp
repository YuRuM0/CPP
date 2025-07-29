/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 20:16:57 by yulpark           #+#    #+#             */
/*   Updated: 2025/07/29 16:23:13 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

enum Levels {
	NO_INPUT,
	DEBUG,
	INFO,
	WARNING,
	ERROR
};

class Harl
{
	public:
		void complain( Levels level );

	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
};
