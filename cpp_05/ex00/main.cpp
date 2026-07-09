/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 16:21:34 by ypark             #+#    #+#             */
/*   Updated: 2026/07/05 16:14:39 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat B1;
		std::cout << B1;

		B1.incGrade(5);
		std::cout << B1;
		B1.decGrade(5);
		std::cout << B1;

		Bureaucrat Nick("Nick", 10);
		std::cout << Nick;

		Bureaucrat Tiago("Tiago", -1);
		std::cout << Tiago;
        Tiago.decGrade(5);
        std::cout << Tiago;

		Bureaucrat Charles("Charles", 1);
		std::cout << Charles;
        Charles.incGrade(1);
        std::cout << Charles;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
