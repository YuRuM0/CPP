/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 17:09:22 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/17 15:28:11 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <cstdlib>
#include "Bureaucrat.hpp"

//forward declaration:
class Bureaucrat;

class Form
{
	private:
		const std::string name;
		bool sign;
		const int SignGrade;
		const int ExecGrade;
	public:
		Form();
		Form(const std::string _name, bool _sign, const int _SignGrade, const int _ExecGrade);
		Form(Form &obj);
		~Form();
		Form &operator=(Form &obj);
		const std::string getName();
		bool getSign();
		const int getSignGrade();
		const int getExecGrade();

		void beSigned(Bureaucrat &B);

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

std::ostream &operator<<(std::ostream &out, Form &obj);
