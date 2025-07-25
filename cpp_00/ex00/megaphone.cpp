/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 19:48:11 by yulpark           #+#    #+#             */
/*   Updated: 2025/07/26 15:12:01 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		int i = 0;
		while (av[++i])
		{
			int j = -1;
			if (i > 1)
				std::cout << " ";
			while (av[i][++j])
				std::cout << (char)toupper(av[i][j]);
		}
		std::cout << std::endl;
	}
	return (0);
}
