/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 19:50:38 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/27 14:24:28 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cstdlib>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
	private:
		const std::string name;
		unsigned int grade;

	public:
		Bureaucrat();
		Bureaucrat(const std::string name, unsigned int grade);
		Bureaucrat (Bureaucrat &obj);
		std::string getName() const;
		unsigned int getGrade() const;
		void incGrade(unsigned int amount);
		void decGrade(unsigned int amount);
		void signForm(AForm &F);
		virtual void executeForm(AForm const &Form)const;
		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const noexcept override;
				// in std::exception, what() is a virtual func meant to give a textual description of the error
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const noexcept override;
		};

};

std::ostream &operator<<(std::ostream &out, Bureaucrat &obj);
