/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 21:43:09 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/27 14:25:18 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() :  name("Form"), sign(false), SignGrade(std::rand() % 150), ExecGrade(std::rand() % 150)
{
}

AForm::AForm(const std::string _name, bool _sign, const int _SignGrade, const int _ExecGrade)
	: name(_name), sign(_sign), SignGrade(_SignGrade), ExecGrade(_ExecGrade)
{
	if (_SignGrade < 1 || _ExecGrade < 1)
		throw GradeTooHighException();
	if (_SignGrade > 150 || _ExecGrade > 150)
		throw GradeTooLowException();
}

AForm::AForm(AForm &obj)
	: name(obj.name), sign(obj.sign), SignGrade(obj.SignGrade), ExecGrade(obj.ExecGrade)
{
}

AForm::~AForm()
{
}

AForm &AForm::operator=(AForm &obj)
{
	if (this != &obj)
		*this = obj;
	return (*this);
}

const std::string AForm::getName() const
{
	return (this->name);
}

bool AForm::getSign()
{
	return (this->sign);
}

const int AForm::getSignGrade()
{
	return (this->SignGrade);
}

const int AForm::getExecGrade()
{
	return (this->ExecGrade);
}

void AForm::beSigned(Bureaucrat &B)
{
	if (B.getGrade() <= this->SignGrade)
		this->sign = true;
	else
		throw GradeTooLowException();
}

void AForm::execute(Bureaucrat const &executor) const
{
	try
	{
		execute(executor);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

std::ostream &operator<<(std::ostream &out, AForm &obj)
{
	out << "Name: " << obj.getName() << std::endl
		<< "Signed: " << obj.getSign() << std::endl
		<< "Sign Grade: " << obj.getSignGrade() << std::endl
		<< "Execution Grade: " << obj.getExecGrade() << std::endl;
	return out;
}

const char *AForm::GradeTooHighException::what() const noexcept
{
	const char *msg = "Grade Too High: the grade must be lower than 1.\n";
	return (msg);
}

const char *AForm::GradeTooLowException::what() const noexcept
{
	const char *msg = "Grade Too Low: the grade must be higher.\n";
	return (msg);
}

const char *AForm::UnsignedForm::what() const noexcept
{
	const char *msg = "Form not signed.\n";
	return (msg);
}
