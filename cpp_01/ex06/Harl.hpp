/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 20:16:57 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/04 18:07:27 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

enum Levels{
	DEBUG,
	INFO,
	WARNING,
	ERROR
};

class Harl
{
	public:
		void complain( std::string level );

	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);

	std::string level[5] = {"DEBUG", "INFO", "WARNING", "ERROR", "INVALID"};
};
