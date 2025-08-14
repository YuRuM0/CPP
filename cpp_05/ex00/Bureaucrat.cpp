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

Bureaucrat::Bureaucrat() : name(""), grade(std::rand() % 150)
{
}

Bureaucrat::Bureaucrat(const std::string name, unsigned int grade) : name(name)
{
	try
	{
		setGrade(grade);
	}
	catch (Bureaucrat::GradeTooLowException)
}

Bureaucrat::Bureaucrat(Bureaucrat &obj) : name(obj.name), grade(obj.grade)
{
}

std::ostream &operator<<(std::ostream &out, Bureaucrat &obj)
{
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << "." << std::endl; //is endl required?
	return out;
}

std::string Bureaucrat::getName()
{
	return (this->name);
}

unsigned int Bureaucrat::getGrade()
{
	return (this->grade);
}

void Bureaucrat::setGrade(unsigned int amount)
{
	if (amount < 1)
		throw GradeTooLowException();
	if (amount > 150)
		throw GradeTooHighException();
	this->grade = amount;
}

void Bureaucrat::incGrade(unsigned int amount)
{
	this->grade += amount;
}

void Bureaucrat::decGrade(unsigned int amount)
{
	this->grade -= amount;
}
