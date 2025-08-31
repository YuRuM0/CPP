/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 21:58:12 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/27 14:36:21 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

//int main()
//{
//	//AForm Form("A form", false, 6, 7);
//	Bureaucrat Charles("Charles", 130);
//	PresidentialPardonForm PPF("PPF");
//	ShrubberyCreationForm SCF("Shrub");
//	RobotomyRequestForm RRF("robot");

//	try
//	{
//		std::cout << Charles;
//		Charles.signForm(PPF);
//		Charles.executeForm(PPF);
//		Charles.signForm(SCF);
//		Charles.executeForm(SCF);
//		Charles.signForm(RRF);
//		Charles.executeForm(RRF);
//		std::cout << "Target name: " << RRF.getTarget() << std::endl;
//	}
//	catch (const std::exception &e)
//	{
//		std::cout << e.what() << std::endl;
//	}
//	return (0);
//}

int main()
{
	Intern someRandomIntern;
	AForm * rrf;
	Bureaucrat Charles("Charles", 1);

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	Charles.signForm(*rrf);
	Charles.executeForm(*rrf);

	std::cout << *rrf << std::endl;
	std::cout << Charles << std::endl;
	delete rrf;
}
