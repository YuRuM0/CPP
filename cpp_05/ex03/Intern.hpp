/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypark <ypark@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 10:59:16 by ypark             #+#    #+#             */
/*   Updated: 2026/07/03 13:04:27 by ypark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class AForm;

class Intern
{
	public:
		Intern();
		~Intern();
		Intern(Intern &obj);
		Intern &operator=(Intern &obj);

		AForm *makeForm(std::string FormName, std::string FormTarget);
		AForm *ShrubberyCreate(std::string FormTarget);
		AForm *PresidentialPardon(std::string FormTarget);
		AForm *RobotomyRequest(std::string FormTarget);

		class WrongFormNameException : public std::exception
		{
			public:
				const char* what() const noexcept override;
				// in std::exception, what() is a virtual func meant to give a textual description of the error
		};

};