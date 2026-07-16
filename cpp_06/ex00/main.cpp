/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 20:46:00 by yulpark           #+#    #+#             */
/*   Updated: 2026/07/11 21:45:46 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

//int main(int ac, char **av)
//{
//	if (ac != 2)
//		std::cout << "Invalide argument." << std::endl;
//	else
//	{
//		ScalarConverter::convert(av[1]);
//	}
//	return (0);
//}


int main()
{
	ScalarConverter scalar;
	std::string literal = "-454645454545454";
	std::cout << scalar.isChar(literal) << "\n" ;
	std::cout << scalar.isInt(literal) << "\n";
	return 0;
}
