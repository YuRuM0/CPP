/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 17:09:16 by yulpark           #+#    #+#             */
/*   Updated: 2025/12/27 18:53:22 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() :  name("NoName"), sign(false), SignGrade(std::rand() % 150), ExecGrade(std::rand() % 150)
{
}

Form::Form(const std::string _name, bool _sign, const int _SignGrade, const int _ExecGrade)
	: name(_name), sign(_sign), SignGrade(_SignGrade), ExecGrade(_ExecGrade)
{
	if (_SignGrade < 1 || _ExecGrade < 1)
		throw GradeTooHighException();
	if (_SignGrade > 150 || _ExecGrade > 150)
		throw GradeTooLowException();
}

Form::Form(Form &obj)
	: name(obj.name), sign(obj.sign), SignGrade(obj.SignGrade), ExecGrade(obj.ExecGrade)
{
}

Form::~Form()
{
}

Form &Form::operator=(Form &obj)
{
	if (this != &obj)
		this->sign = obj.sign;
	return (*this);
}

std::string Form::getName() const
{
	return (this->name);
}

bool Form::getSign() const
{
	return (this->sign);
}

int Form::getSignGrade() const
{
	return (this->SignGrade);
}

int Form::getExecGrade() const
{
	return (this->ExecGrade);
}

void Form::beSigned(Bureaucrat &B)
{
	if (B.getGrade() <= this->SignGrade)
		this->sign = true;
	else
		throw GradeTooLowException();
}

std::ostream &operator<<(std::ostream &out, Form &obj)
{
	out << "Name: " << obj.getName() << std::endl
		<< "Signed: " << obj.getSign() << std::endl
		<< "Sign Grade: " << obj.getSignGrade() << std::endl
		<< "Execution Grade: " << obj.getExecGrade() << std::endl;
	return out;
}

const char *Form::GradeTooHighException::what() const noexcept
{
	const char *msg = "Grade is too high.\n";
	return (msg);
}

const char *Form::GradeTooLowException::what() const noexcept
{
	const char *msg = "Grade is too low.\n";
	return (msg);
}
