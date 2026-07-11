/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 14:10:38 by ypark             #+#    #+#             */
/*   Updated: 2026/07/11 20:32:36 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

std::ostream &operator<<(std::ostream &out, Form &obj)
{
    out << "Name: " << obj.getName() << "\n"
    << "Is signed: " << obj.getIsSigned() << "\n"
    << "Grade required to sign: " << obj.getSignGrade() << "\n"
    << "Grade required to execute: " << obj.getExecGrade() << "\n";
    return (out);
}

const char *Form::GradeTooHighException::what() const noexcept
{
    const char *msg = "Grade Too High: the grade must be lower.\n";
	return (msg);
}

const char *Form::GradeTooLowException::what() const noexcept
{
    const char *msg = "Grade Too Low: the grade must be higher.\n";
	return (msg);
}

Form::Form() : name("No name"), isSigned(false), signGrade(std::rand() % 150), execGrade(std::rand() % 150)
{
}

Form::~Form()
{
}

Form::Form(const std::string name, const int signGrade, const int execGrade): name(name), signGrade(signGrade), execGrade(execGrade)
{
    if (signGrade > 150 || execGrade > 150)
        throw GradeTooLowException();
    else if (signGrade < 1 || execGrade < 1)
        throw GradeTooHighException();
    this->isSigned = false;
}

Form::Form(const Form &obj): name(obj.name), isSigned(obj.isSigned), signGrade(obj.signGrade), execGrade(obj.execGrade)
{
}

Form &Form::operator=(const Form &obj)
{
    if (this != &obj)
		this->isSigned = obj.isSigned;
	return (*this);
}

const std::string Form::getName(void) const
{
    return (name);
}

bool Form::getIsSigned(void) const
{
    return isSigned;
}

int Form::getSignGrade(void) const
{
    return signGrade;
}

int Form::getExecGrade(void) const
{
    return execGrade;
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
//     Also, add a beSigned() member function to the Form that takes a Bureaucrat as a
// parameter. It changes the form’s status to signed if the bureaucrat’s grade is high enough
// (greater than or equal to the required one). Remember, grade 1 is higher than grade 2.
// If the grade is too low, throw a Form::GradeTooLowException.
    if (bureaucrat.getGrade() <= getSignGrade())
        isSigned = true;
    else
        throw GradeTooLowException();
}
