/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 20:21:45 by yulpark           #+#    #+#             */
/*   Updated: 2025/12/27 18:55:33 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Form Form("A form", true, 6, 7);
	std::cout << Form << std::endl;

	try
	{
		Bureaucrat Bob;
		std::cout << Bob;

		Bob.incGrade(5);
		std::cout << Bob;
		Bob.decGrade(10);
		std::cout << Bob << std::endl;

		Bureaucrat Nick("Nick", 5);
		std::cout << Nick;
		Nick.signForm(Form);

		Bureaucrat Tiago("Tiago", 150);
		std::cout << Tiago;
		//Tiago.decGrade(1);
		//std::cout << Tiago;

		Bureaucrat Charles("Charles", 24);
		Charles.incGrade(2);
		std::cout << Charles;
		Charles.signForm(Form);
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
