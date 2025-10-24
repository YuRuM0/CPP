/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 21:43:38 by yulpark           #+#    #+#             */
/*   Updated: 2025/10/24 14:20:04 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <cstdlib>
#include "Bureaucrat.hpp"

//forward declaration:
class Bureaucrat;

class AForm
{
	private:
		const std::string name;
		bool sign;
		const int SignGrade;
		const int ExecGrade;
	public:
		AForm();
		AForm(AForm &obj);
		AForm(const std::string _name, bool _sign, const int _SignGrade, const int _ExecGrade);
		virtual ~AForm();
		AForm &operator=(AForm &obj);

		const std::string getName() const;
		bool getSign();
		const int getSignGrade();
		const int getExecGrade();

		void beSigned(Bureaucrat &B);
		void execute(Bureaucrat const & executor)const;
		virtual void action()const = 0;

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
		class UnsignedForm : public std::exception
		{
			public:
				const char*what() const noexcept override;
		};

};

std::ostream &operator<<(std::ostream &out, AForm &obj);
