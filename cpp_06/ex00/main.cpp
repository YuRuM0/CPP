/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 17:02:09 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/22 15:51:42 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
	if (ac <= 1)
		std::cout << "Input required!" << std::endl;
	else
		ScalarConverter::convert(av[1]);
	return (0);
}
