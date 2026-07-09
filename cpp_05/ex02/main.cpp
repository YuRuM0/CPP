/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 16:21:34 by ypark             #+#    #+#             */
/*   Updated: 2026/07/05 17:19:15 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

// int main()
// {
// 	try
// 	{
// 		Bureaucrat B1;
// 		std::cout << B1;

// 		B1.incGrade(5);
// 		std::cout << B1;
// 		B1.decGrade(10);
// 		std::cout << B1;

// 		Bureaucrat Nick("Nick", 10);
// 		std::cout << Nick;

// 		Bureaucrat Tiago("Tiago", 0);
// 		std::cout << Tiago;
//         Tiago.decGrade(5);
//         std::cout << Tiago;

// 		Bureaucrat Charles("Charles", 1);
// 		std::cout << Charles;
//         Charles.incGrade(1);
//         std::cout << Charles;
// 	}
// 	catch (const std::exception &e)
// 	{
// 		std::cout << e.what() << std::endl;
// 	}
// 	return (0);
// }


int	main()
{
	{
		try
		{
			Bureaucrat teamLeader("John", 6);
			std::cout << teamLeader << std::endl;
			PresidentialPardonForm F1("Thomas");
			std::cout << F1 << std::endl;
			teamLeader.signForm(F1);
			std::cout << F1 << std::endl;
			teamLeader.executeForm(F1);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}


	}

	std::cout << std::endl;

	{
		try
		{
			Bureaucrat teamLeader("Thiago", 45);
			std::cout << teamLeader << std::endl;
			RobotomyRequestForm F1("V");
			std::cout << F1 << std::endl;
			teamLeader.signForm(F1);
			std::cout << F1 << std::endl;
			teamLeader.executeForm(F1);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

	}

	std::cout << std::endl;

	{
		try
		{
			Bureaucrat teamLeader("Marcos", 1);
			std::cout << teamLeader << std::endl;
			ShrubberyCreationForm F1("school");
			std::cout << F1 << std::endl;
			teamLeader.signForm(F1);
			std::cout << F1 << std::endl;
			teamLeader.executeForm(F1);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

}
