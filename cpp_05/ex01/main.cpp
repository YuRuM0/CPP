/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 20:21:45 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/15 17:07:38 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat Bob;
		std::cout << Bob;

		Bob.incGrade(5);
		std::cout << Bob;
		Bob.decGrade(10);
		std::cout << Bob;

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
