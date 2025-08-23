/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 14:14:22 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/18 17:28:58 by yulpark          ###   ########.fr       */
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
