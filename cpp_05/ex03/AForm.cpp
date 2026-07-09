/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 14:10:38 by ypark             #+#    #+#             */
/*   Updated: 2026/07/05 16:34:26 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

std::ostream &operator<<(std::ostream &out, AForm &obj)
{
    out << "Name: " << obj.getName() << "\n"
    << "Is signed: " << obj.getIsSigned() << "\n"
    << "Grade required to sign: " << obj.getSignGrade() << "\n"
    << "Grade required to execute: " << obj.getExecGrade() << "\n";
    return (out);
}

const char *AForm::GradeTooHighException::what() const noexcept
{
    const char *msg = "Grade Too High: the grade must be lower than 1.\n";
	return (msg);
}

const char *AForm::GradeTooLowException::what() const noexcept
{
    const char *msg = "Grade Too Low: the grade must be higher than 150.\n";
	return (msg);
}

const char *AForm::Unsigned::what() const noexcept
{
    const char *msg = "Form Unsigned.\n";
	return (msg);
}


AForm::AForm() : name("No name"), isSigned(false), signGrade(std::rand() % 150), execGrade(std::rand() % 150)
{
}

AForm::~AForm()
{
}

AForm::AForm(const std::string name,  bool isSigned, const int signGrade, const int execGrade): name(name), isSigned(false), signGrade(signGrade), execGrade(execGrade)
{
    if (signGrade > 150 || execGrade > 150)
        throw GradeTooLowException();
    else if (signGrade < 1 || execGrade < 1)
        throw GradeTooHighException();
    this->isSigned = false;
}

AForm::AForm(const AForm &obj): name(obj.name), isSigned(obj.isSigned), signGrade(obj.signGrade), execGrade(obj.execGrade)
{
}

AForm &AForm::operator=(const AForm &obj)
{
    if (this != &obj)
		this->isSigned = obj.isSigned;
	return (*this);}

const std::string AForm::getName(void) const
{
    return (name);
}

bool AForm::getIsSigned(void) const
{
    return isSigned;
}

int AForm::getSignGrade(void) const
{
    return signGrade;
}

int AForm::getExecGrade(void) const
{
    return execGrade;
}

void AForm::beSigned(const Bureaucrat &bureaucrat)
{
//     Also, add a beSigned() member function to the AForm that takes a Bureaucrat as a
// parameter. It changes the AForm’s status to signed if the bureaucrat’s grade is high enough
// (greater than or equal to the required one). Remember, grade 1 is higher than grade 2.
// If the grade is too low, throw a AForm::GradeTooLowException.
    if (bureaucrat.getGrade() <= getSignGrade())
        isSigned = true;
    else
        throw GradeTooLowException();
}

void AForm::execute(Bureaucrat const &executor) const
{
    if (getIsSigned() != true)
        throw Unsigned();
    if (getExecGrade() < executor.getGrade())
        throw GradeTooLowException();
    act();
}
