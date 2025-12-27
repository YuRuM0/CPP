/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 20:21:45 by yulpark           #+#    #+#             */
/*   Updated: 2025/12/27 18:28:04 by yulpark          ###   ########.fr       */
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
		B1.decGrade(10);
		std::cout << B1;

		Bureaucrat Nick("Nick", 10);
		std::cout << Nick;

		Bureaucrat Tiago("Tiago", 150);
		std::cout << Tiago;

		Bureaucrat Charles("Charles", 2);
		std::cout << Charles;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
