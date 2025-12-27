/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 19:50:38 by yulpark           #+#    #+#             */
/*   Updated: 2025/12/27 18:46:54 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cstdlib>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		const std::string name;
		unsigned int grade;

	public:
		Bureaucrat();
		Bureaucrat(const std::string name, unsigned int grade);
		Bureaucrat (Bureaucrat &obj);
		Bureaucrat &operator=(Bureaucrat &obj);
		~Bureaucrat();

		std::string getName() const;
		unsigned int getGrade() const;
		void incGrade(unsigned int amount);
		void decGrade(unsigned int amount);
		void signForm(Form &F);

		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const noexcept override;
				// in std::exception, what() is a virtual func meant to give a textual description of the error
				// the exception doesn't escape; not caught inside
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const noexcept override;
		};
};

std::ostream &operator<<(std::ostream &out, Bureaucrat &obj);
