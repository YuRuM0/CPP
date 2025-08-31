#include "Bureaucrat.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 19:50:34 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/13 19:50:35 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("NoName"), grade(std::rand() % 150)
{
}

Bureaucrat::Bureaucrat(const std::string name, unsigned int grade) : name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	this->grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat &obj) : name(obj.name), grade(obj.grade)
{
}

std::ostream &operator<<(std::ostream &out, Bureaucrat &obj)
{
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << "." << std::endl; //is endl required?
	return out;
}

std::string Bureaucrat::getName() const
{
	return (this->name);
}

unsigned int Bureaucrat::getGrade() const
{
	return (this->grade);
}

void Bureaucrat::incGrade(unsigned int amount)
{
	if (grade - amount < 1)
		throw GradeTooLowException();
	if (grade - amount > 150)
		throw GradeTooHighException();
	this->grade -= amount;
}

void Bureaucrat::decGrade(unsigned int amount)
{
	if (grade + amount < 1)
		throw GradeTooLowException();
	if (grade + amount > 150)
		throw GradeTooHighException();
	this->grade += amount;
}

const char *Bureaucrat::GradeTooHighException::what() const noexcept
{
	const char *msg = "Grade Too High: the grade must be lower than 1.\n";
	return (msg);
}

const char *Bureaucrat::GradeTooLowException::what() const noexcept
{
	const char *msg = "Grade Too Low: the grade must be higher.\n";
	return (msg);
}

void Bureaucrat::signForm(AForm &F)
{
	try
	{
		F.beSigned(*this);
		std::cout << this->getName() << " signed " << F.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << this->getName() << " couldn't sign " << F.getName() << " because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const &Form) const
{
	try
	{
		Form.execute(*this);
		std::cout << this->getName() << " executed Form " << Form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
