/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 14:14:23 by yulpark           #+#    #+#             */
/*   Updated: 2026/07/11 19:54:04 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

Intern::Intern(Intern &obj)
{
}

Intern &Intern::operator=(Intern &obj)
{
	if (this != &obj)
		*this = obj;
	return (*this);
}

AForm *Intern::ShrubberyCreate(std::string FormTarget)
{
	return new ShrubberyCreationForm(FormTarget); // new +  constructor -> allocates and then constructs
}

AForm *Intern::PresidentialPardon(std::string FormTarget)
{
	return new PresidentialPardonForm(FormTarget);
}

AForm *Intern::RobotomyRequest(std::string FormTarget)
{
	return new RobotomyRequestForm(FormTarget);
}
AForm *Intern::makeForm(std::string FormName, std::string FormTarget)
{
	std::string options[3] = {"shrubbery create", "robotomy request", "presidential pardon"};
	AForm *(Intern::*forms[3])(std::string FormTarget) = {&Intern::ShrubberyCreate, &Intern::RobotomyRequest, &Intern::PresidentialPardon};
	int i = 0;
	for (int i = 0; i < 3; i++)
	{
		if (FormName == options[i])
		{
			std::cout << "Intern creates " << FormName << std::endl;
			return ((this->*forms[i])(FormTarget));
		}
	}
	throw WrongFormNameException();
	return NULL;
}

const char *Intern::WrongFormNameException::what() const noexcept
{
	const char *msg = "No form with such name found.\n";
	return (msg);
}
