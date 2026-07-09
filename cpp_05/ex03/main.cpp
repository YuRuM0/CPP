/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 16:21:34 by ypark             #+#    #+#             */
/*   Updated: 2026/07/09 22:54:50 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int	main()
{
	{
		try
		{
			Intern intern;
			AForm* rrf;

			rrf = intern.makeForm("robotomy request", "Bender");
			delete rrf;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		try
		{
			Intern intern;
			AForm* rrf;

			rrf = intern.makeForm("shrubbery create", "Bender");
			std::cout << *rrf << std::endl;
			delete rrf;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		try
		{
			Intern intern;
			AForm* rrf;

			rrf = intern.makeForm("", "");
			std::cout << *rrf << std::endl;
			delete rrf;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		try
		{
			Intern intern;
			AForm* rrf;

			rrf = intern.makeForm("presidential pardon", "Bender");
			std::cout << *rrf << std::endl;
			delete rrf;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		try
		{
			Intern intern;
			AForm* rrf;

			rrf = intern.makeForm("unknown", "Bender");
			std::cout << *rrf << std::endl;
			delete rrf;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	//{
	//	try
	//	{
	//		Bureaucrat teamLeader("John", 6);
	//		std::cout << teamLeader << std::endl;
	//		PresidentialPardonForm F1("Thomas");
	//		std::cout << F1 << std::endl;
	//		teamLeader.signForm(F1);
	//		std::cout << F1 << std::endl;
	//		teamLeader.executeForm(F1);
	//	}
	//	catch(const std::exception& e)
	//	{
	//		std::cerr << e.what() << '\n';
	//	}


	//}


}
