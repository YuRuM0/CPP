#include "PresidentialPardonForm.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 21:58:09 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/16 21:58:10 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		AForm::operator=(obj);
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

const std::string &PresidentialPardonForm::getTarget()
{
	return (this->target);
}

void PresidentialPardonForm::action() const
{
	std::cout << target << " has been pardoned by Zaphod Beeblebrox.\n";
}
