/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 20:21:45 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/16 20:51:33 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Form Form("A form", false, 6, 7);

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
		Nick.signForm(Form);

		Bureaucrat Tiago("Tiago", 150);
		std::cout << Tiago;
		Tiago.decGrade(1);
		std::cout << Tiago;

		Bureaucrat Charles("Charles", 1);
		//Charles.incGrade(2);
		std::cout << Charles;
		Charles.signForm(Form);
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
