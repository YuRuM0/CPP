/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypark <ypark@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 16:20:00 by ypark             #+#    #+#             */
/*   Updated: 2026/06/04 16:50:09 by ypark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("NoName"), grade(std::rand() % 150) // for const it has to be in the initialisation because it can't be added after construction
{
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name)
{
    if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	this->grade = grade;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj): name(obj.name), grade(obj.grade)
{
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
{
	if (this != &obj)
		this->grade = obj.grade;
	return (*this);
}

std::string Bureaucrat::getName() const
{
    return name;
}

int Bureaucrat::getGrade() const
{
    return grade;
}

void Bureaucrat::incGrade(int amount)
{
    if (grade - amount < 1)
		throw GradeTooHighException();
	if (grade - amount > 150)
		throw GradeTooLowException();
    this->grade -= amount;
}

void Bureaucrat::decGrade(int amount)
{
    if (grade + amount < 1)
		throw GradeTooHighException();
	if (grade + amount > 150)
		throw GradeTooLowException();
    this->grade += amount;
}

std::ostream &operator<<(std::ostream &out, Bureaucrat &obj)
{
    out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ". \n";
    return (out);
}

const char *Bureaucrat::GradeTooHighException::what() const noexcept
{
    const char *msg = "Grade Too High: the grade must be lower than 1.\n";
	return (msg);
}

const char *Bureaucrat::GradeTooLowException::what() const noexcept
{
    const char *msg = "Grade Too Low: the grade must be higher than 150.\n";
	return (msg);
}
