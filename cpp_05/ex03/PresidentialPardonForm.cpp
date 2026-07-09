/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 11:56:35 by ypark             #+#    #+#             */
/*   Updated: 2026/07/05 17:16:25 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", false, 25, 5), target(target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &obj): target(obj.target)
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm &obj)
{
    if (this != &obj)
	{
        AForm::operator=(obj);
		this->target = obj.target;
	}
    return (*this);
}

std::string PresidentialPardonForm::getTarget()	const
{
    return (target);
}

void PresidentialPardonForm::act() const
{
    std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox. \n";
}
