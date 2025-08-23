/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 21:58:09 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/18 15:10:41 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string _target)
: AForm("PresidentialPardonForm", false, 25, 5), target(_target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &obj)
: AForm(obj), target(obj.target)
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm &obj)
{
	if (this != &obj)
		*this = obj;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

const std::string &PresidentialPardonForm::getTarget()
{
	return (this->target);
}

void PresidentialPardonForm::beSigned(Bureaucrat &B)
{
	if (B.getGrade() <= 25)
		this->sign = true;
	else
		throw GradeTooLowException();
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (this->sign == false)
		throw UnsignedForm();
	if (executor.getGrade() <= 5)
	{
		std::cout << target << " has been pardoned by Zaphod Beeblebrox.\n";
	}
	else
		throw GradeTooLowException();
}
