/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 19:49:04 by yulpark           #+#    #+#             */
/*   Updated: 2025/07/28 20:15:21 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Harl
{
	public:
		void complain( std::string level );

	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
};
